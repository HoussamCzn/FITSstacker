#pragma once

#ifndef __FILE_DIALOG_WIDGET_H__
#define __FILE_DIALOG_WIDGET_H__

#include <QWidget>
#include <CCfits/CCfits>
#include <QStringList>
#include <valarray>

class QFileDialog;

class FileDialogWidget : public QWidget
{
	Q_OBJECT

public:

	FileDialogWidget(QWidget* parent);

	~FileDialogWidget() = default;

private slots:

	void getFilenames();

	void saveFilename(const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& contents);

	void writeResults(const std::string& file_name, const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& contents);

signals:

	void filesReady(const QStringList& file_names);

	void filenameReady(const std::string& file_name, const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& contents);

	void abortFileSelection();

	void fileWritten();

private:

	QFileDialog* m_file_dialog;
};

#endif // !__FILE_DIALOG_WIDGET_H__