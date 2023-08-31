#include "SelectSinglePlayerWidget.h"
#include "ui_SelectSinglePlayerWidget.h"

#include <QDebug>

SelectSinglePlayerWidget::SelectSinglePlayerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectSinglePlayerWidget)
{
    ui->setupUi(this);
}

SelectSinglePlayerWidget::~SelectSinglePlayerWidget()
{
    delete ui;
}

SinglePlayer SelectSinglePlayerWidget::getSinglePlayer()
{

    if (ui->radioButtonStart->isChecked())
    {
        return SINGLEPLAYER;
    }
    else
    {
        qDebug() << "Nothing has been selected.";
        Q_ASSERT(false);
        return SINGLEPLAYER_NONE;
    }
}

void SelectSinglePlayerWidget::on_pushButtonOk_clicked()
{
    emit clickedOk();
}

void SelectSinglePlayerWidget::on_pushButtonCancel_clicked()
{
    emit clickedCancel();
}
