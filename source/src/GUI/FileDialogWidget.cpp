#include <GUI/FileDialogWidget.hpp>
#include <IUTfits.hpp>
#include <QFileDialog>
#include <QMessageBox>

FileDialogWidget::FileDialogWidget(QWidget* parent)
	: QWidget{parent}, m_file_dialog(new QFileDialog(this))
{
	m_file_dialog->setFileMode(QFileDialog::ExistingFiles);
	connect(this, SIGNAL(filesReady(QStringList)), parent, SLOT(receiveDataToTransmit(QStringList)));
	connect(this, SIGNAL(filenameReady(std::string, std::unique_ptr<CCfits::FITS>, std::valarray<short>)), this, SLOT(writeResults(std::string, std::unique_ptr<CCfits::FITS>, std::valarray<short>)));
	connect(this, SIGNAL(fileWritten()), parent, SLOT(receiveEndProcess()));
	connect(this, SIGNAL(abortFileSelection()), parent, SLOT(receiveEndProcess()));
}

void FileDialogWidget::getFilenames()
{
	QStringList filenames = m_file_dialog->getOpenFileNames(this, "Load FITS files", QString(), "FITS files (*.fits)");
	if (!filenames.isEmpty())
	{
		emit(filesReady(filenames));
	}
	else
	{
		emit(abortFileSelection());
	}
}

void FileDialogWidget::saveFilename(const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& contents)
{
	QString file = m_file_dialog->getSaveFileName(this, "Save stacked FITS file", QString(), "FITS files (*.fits)");
	emit(filenameReady(file.toStdString(), base, contents));
}

void FileDialogWidget::writeResults(const std::string& file_name, const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& contents)
{
	IUTfits::writeFits(file_name, base, contents);
	std::string success_message = "File successfully written to disk at location " + file_name;
	QMessageBox::information(this, objectName(), success_message.c_str());
	emit(fileWritten());
}
