#ifndef SELECTSINGLEPLAYERWIDGET_H
#define SELECTSSINGLEPLAYERWIDGET_H

#include <QWidget>
#include "data.h"

namespace Ui {
class SelectSinglePlayerWidget;
}

class SelectSinglePlayerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SelectSinglePlayerWidget(QWidget *parent = nullptr);
    ~SelectSinglePlayerWidget();

    SinglePlayer getSinglePlayer();

private slots:
    void on_pushButtonOk_clicked();
    void on_pushButtonCancel_clicked();

signals:
    void clickedOk();
    void clickedCancel();

private:
    Ui::SelectSinglePlayerWidget *ui;
};

#endif // SELECTSINGLEPLAYERWIDGET_H
