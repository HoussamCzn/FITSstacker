#include <GUI/InputWidget.hpp>
#include <QFormLayout>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

InputWidget::InputWidget(QWidget* parent)
    : QWidget{ parent }, m_layout(new QFormLayout(this)), m_input_box(new QComboBox(this)), m_confirm_button(new QPushButton("confirm", this))
{
    setFixedSize(250, 150);
    m_layout->setSizeConstraint(QLayout::SetFixedSize);
    QLabel* text = new QLabel("Select a stacking method :", this);
    m_input_box->addItem("Mean");
    m_input_box->addItem("Median");
    m_confirm_button->setCheckable(true);
    m_layout->addWidget(text);
    m_layout->addWidget(m_input_box);
    m_layout->addWidget(m_confirm_button);

    connect(m_confirm_button, SIGNAL(clicked(bool)), this, SLOT(buttonClicked(const bool)));
    connect(this, SIGNAL(sendChoice(int)), parent, SLOT(receiveChoice(int)));
}

void InputWidget::buttonClicked(const bool clicked)
{
    if (clicked)
    {
        m_confirm_button->setDisabled(true);
        emit sendChoice(m_input_box->currentIndex());
    }
}

void InputWidget::enableButton()
{
    m_confirm_button->setDisabled(false);
    m_confirm_button->setChecked(false);
}