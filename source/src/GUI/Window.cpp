#include <GUI/Window.hpp>
#include <GUI/InputWidget.hpp>
#include <GUI/FileDialogWidget.hpp>
#include <QApplication>

Window::Window(QWidget* parent)
    : QWidget{ parent }, m_input_widget(std::make_unique<InputWidget>(this)), m_file_dialog_widget(std::make_unique<FileDialogWidget>(this)), m_process_widget(std::make_unique<ProcessWidget>(this)), m_input_choice(0)
{
    setFixedSize(m_input_widget->size());
    connect(this, SIGNAL(launchFileDialog()), &*m_file_dialog_widget, SLOT(getFilenames()));
    connect(this, SIGNAL(shareData(QStringList, int)), &*m_process_widget, SLOT(checkData(QStringList, int)));
    connect(this, SIGNAL(raiseWarning()), &*m_process_widget, SLOT(warnUser()));
    connect(this, SIGNAL(raiseOk()), &*m_process_widget, SLOT(processData()));
    connect(this, SIGNAL(transmitResults(std::unique_ptr<CCfits::FITS>, std::valarray<short>)), &*m_file_dialog_widget, SLOT(saveFilename(std::unique_ptr<CCfits::FITS>, std::valarray<short>)));
    connect(this, SIGNAL(allowStack()), &*m_input_widget, SLOT(enableButton()));
}

void Window::receiveChoice(const int choice)
{
    m_input_choice = choice;
    emit(launchFileDialog());
}

void Window::receiveDataToTransmit(const QStringList& file_names)
{
    emit shareData(file_names, m_input_choice);
}

void Window::receiveValidityNotice(const bool validity)
{
    !validity ? emit(raiseWarning()) : emit((raiseOk()));
}

void Window::receiveResults(const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& res)
{
    emit(transmitResults(base, res));
}

void Window::receiveEndProcess()
{
    emit(allowStack());
}
