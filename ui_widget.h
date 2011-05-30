/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sat Jan 23 19:15:15 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *lblNum1;
    QPushButton *pbAdd;
    QPushButton *pbClear;
    QLineEdit *leNum1;
    QLineEdit *leNum2;
    QLabel *lblNum2;
    QLabel *lblNum3;
    QLineEdit *leNum3;
    QPushButton *pbExit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(357, 153);
        lblNum1 = new QLabel(Widget);
        lblNum1->setObjectName(QString::fromUtf8("lblNum1"));
        lblNum1->setGeometry(QRect(30, 30, 62, 17));
        pbAdd = new QPushButton(Widget);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));
        pbAdd->setGeometry(QRect(230, 20, 93, 27));
        pbClear = new QPushButton(Widget);
        pbClear->setObjectName(QString::fromUtf8("pbClear"));
        pbClear->setGeometry(QRect(230, 60, 93, 27));
        leNum1 = new QLineEdit(Widget);
        leNum1->setObjectName(QString::fromUtf8("leNum1"));
        leNum1->setGeometry(QRect(90, 20, 113, 27));
        leNum2 = new QLineEdit(Widget);
        leNum2->setObjectName(QString::fromUtf8("leNum2"));
        leNum2->setGeometry(QRect(90, 60, 113, 27));
        lblNum2 = new QLabel(Widget);
        lblNum2->setObjectName(QString::fromUtf8("lblNum2"));
        lblNum2->setGeometry(QRect(30, 70, 62, 17));
        lblNum3 = new QLabel(Widget);
        lblNum3->setObjectName(QString::fromUtf8("lblNum3"));
        lblNum3->setGeometry(QRect(30, 110, 62, 17));
        leNum3 = new QLineEdit(Widget);
        leNum3->setObjectName(QString::fromUtf8("leNum3"));
        leNum3->setGeometry(QRect(90, 100, 113, 27));
        leNum3->setReadOnly(true);
        pbExit = new QPushButton(Widget);
        pbExit->setObjectName(QString::fromUtf8("pbExit"));
        pbExit->setGeometry(QRect(230, 100, 93, 27));

        retranslateUi(Widget);
        QObject::connect(pbExit, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        lblNum1->setText(QApplication::translate("Widget", "Num1", 0, QApplication::UnicodeUTF8));
        pbAdd->setText(QApplication::translate("Widget", "Add", 0, QApplication::UnicodeUTF8));
        pbClear->setText(QApplication::translate("Widget", "Clear", 0, QApplication::UnicodeUTF8));
        lblNum2->setText(QApplication::translate("Widget", "Num2", 0, QApplication::UnicodeUTF8));
        lblNum3->setText(QApplication::translate("Widget", "Sum", 0, QApplication::UnicodeUTF8));
        pbExit->setText(QApplication::translate("Widget", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
