#include <GUI/ProcessWidget.hpp>
#include <IUTfits.hpp>
#include <QMessageBox>

ProcessWidget::ProcessWidget(QWidget* parent)
	: QWidget{parent}, m_filenames(), m_choice(0)
{
	connect(this, SIGNAL(noticeDataValidity(bool)), parent, SLOT(receiveValidityNotice(bool)));
	connect(this, SIGNAL(invalidData()), parent, SLOT(receiveEndProcess()));
	connect(this, SIGNAL(processingDone(std::unique_ptr<CCfits::FITS>, std::valarray<short>)), parent, SLOT(receiveResults(std::unique_ptr<CCfits::FITS>, std::valarray<short>)));
}

void ProcessWidget::checkData(const QStringList& file_names, const int choice)
{
	bool validity = true;

	if (file_names.size() < 2)
	{
		validity = false;
	}

	if (validity)
	{
		m_filenames = file_names;
		m_choice = choice;
	}

	emit(noticeDataValidity(validity));
}

void ProcessWidget::warnUser()
{
	QMessageBox::critical(this, objectName(), "You need at least 2 files to perform a stack !");
	emit(invalidData());
}

void ProcessWidget::processData()
{
	using namespace CCfits;

	std::vector<std::unique_ptr<FITS>> fits_files;
	std::vector<std::valarray<short>> fits_data;

	try
	{
		fits_files.reserve(m_filenames.size());

		for (const QString& file : m_filenames)
		{
			fits_files.emplace_back(std::make_unique<FITS>(file.toStdString(), Read, true));
		}
		for (const std::unique_ptr<FITS>& fits_file : fits_files)
		{
			fits_data.emplace_back(IUTfits::readImageData(fits_file));
		}

		m_choice == 0 ? emit(processingDone(fits_files[0], IUTfits::meanStack(fits_data))) : emit(processingDone(fits_files[0], IUTfits::medianStack(fits_data)));
	}
	catch (const FitsException& exc)
	{
		const std::string err = "An error occured while processing the FITS files.\n" + exc.message();
		QMessageBox::critical(this, objectName(), err.c_str());
		emit(invalidData());
	}
}