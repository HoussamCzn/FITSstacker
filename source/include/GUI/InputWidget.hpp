#pragma once

#ifndef __INPUT_WIDGET_H__
#define __INPUT_WIDGET_H__

#include <QWidget>

class QFormLayout;
class QComboBox;
class QPushButton;

class InputWidget : public QWidget
{
	Q_OBJECT

public:

	explicit InputWidget(QWidget* parent);

	~InputWidget() = default;

private slots:

	void buttonClicked(const bool clicked);

	void enableButton();

signals:

	void sendChoice(const int choice);

private:

	QFormLayout* m_layout;
	QComboBox* m_input_box;
	QPushButton* m_confirm_button;
};

#endif // !__INPUT_WIDGET_H__