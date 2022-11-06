#pragma once

#ifndef __WINDOW_H__
#define __WINDOW_H__

#include <QWidget>
#include <GUI/InputWidget.hpp>
#include <GUI/FileDialogWidget.hpp>
#include <GUI/ProcessWidget.hpp>
#include <QStringList>
#include <valarray>

class Window : public QWidget
{
    Q_OBJECT

public:

    explicit Window(QWidget* parent = nullptr);

    ~Window() = default;

private slots:

    void receiveChoice(const int choice);

    void receiveDataToTransmit(const QStringList& file_names);

    void receiveValidityNotice(const bool validity);

    void receiveResults(const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& res);

    void receiveEndProcess();

signals:

    void launchFileDialog();

    void shareData(const QStringList& file_names, const int choice);

    void raiseWarning();

    void raiseOk();

    void transmitResults(const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& res);

    void allowStack();

private:
    
    std::unique_ptr<InputWidget> m_input_widget;
    std::unique_ptr<FileDialogWidget> m_file_dialog_widget;
    std::unique_ptr<ProcessWidget> m_process_widget;
    int m_input_choice;
};

#endif // !__WINDOW_H__
