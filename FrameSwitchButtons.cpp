#include "FrameSwitchButtons.h"
#include "ui_FrameSwitchButtons.h"

FrameSwitchButtons::FrameSwitchButtons(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrameSwitchButtons)
{
    ui->setupUi(this);
}

FrameSwitchButtons::~FrameSwitchButtons()
{
    delete ui;
}
