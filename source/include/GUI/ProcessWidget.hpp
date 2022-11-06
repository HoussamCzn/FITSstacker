#pragma once

#ifndef __PROCESS_WIDGET_H__
#define __PROCESS_WIDGET_H__

#include <QWidget>
#include <CCfits/CCfits>
#include <QStringList>
#include <valarray>
#include <memory>

class ProcessWidget : public QWidget
{
	Q_OBJECT

public:

	ProcessWidget(QWidget* parent);

	~ProcessWidget() = default;

private slots:

	void checkData(const QStringList& file_names, const int choice);

	void warnUser();

	void processData();

signals:

	void noticeDataValidity(const bool validity);

	void invalidData();

	void processingDone(const std::unique_ptr<CCfits::FITS>& base, const std::valarray<short>& res);

private:

	QStringList m_filenames;
	int m_choice;
};

#endif // !__PROCESS_WIDGET_H__