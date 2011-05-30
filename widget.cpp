#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;

    }
}

void Widget::on_pbClear_clicked()
{
    ui->leNum1->clear();
    ui->leNum2->clear();
    ui->leNum3->clear();
}

void Widget::on_pbAdd_clicked()
{
    int x,y,z;
    x=QVariant(ui->leNum1->text()).toInt();
    y=QVariant(ui->leNum2->text()).toInt();
    z=x+y;
    ui->leNum3->setText(QVariant(z).toString());
}
