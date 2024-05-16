/********************************************************************************
** Form generated from reading UI file 'winremocaotupla.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINREMOCAOTUPLA_H
#define UI_WINREMOCAOTUPLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinRemocaoTupla
{
public:
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditAtributo;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditElemento;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cancelar;
    QPushButton *Ok;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *WinRemocaoTupla)
    {
        if (WinRemocaoTupla->objectName().isEmpty())
            WinRemocaoTupla->setObjectName("WinRemocaoTupla");
        WinRemocaoTupla->resize(885, 510);
        label_3 = new QLabel(WinRemocaoTupla);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 70, 141, 16));
        textBrowser = new QTextBrowser(WinRemocaoTupla);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(150, 240, 381, 131));
        widget = new QWidget(WinRemocaoTupla);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(24, 114, 661, 95));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEditAtributo = new QLineEdit(widget);
        lineEditAtributo->setObjectName("lineEditAtributo");

        horizontalLayout->addWidget(lineEditAtributo);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEditElemento = new QLineEdit(widget);
        lineEditElemento->setObjectName("lineEditElemento");

        horizontalLayout_2->addWidget(lineEditElemento);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        Cancelar = new QPushButton(widget);
        Cancelar->setObjectName("Cancelar");

        horizontalLayout_8->addWidget(Cancelar);

        Ok = new QPushButton(widget);
        Ok->setObjectName("Ok");

        horizontalLayout_8->addWidget(Ok);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(WinRemocaoTupla);

        QMetaObject::connectSlotsByName(WinRemocaoTupla);
    } // setupUi

    void retranslateUi(QDialog *WinRemocaoTupla)
    {
        WinRemocaoTupla->setWindowTitle(QCoreApplication::translate("WinRemocaoTupla", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("WinRemocaoTupla", "Remo\303\247\303\243o de Tuplas", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("WinRemocaoTupla", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A remo\303\247\303\243o \303\251 feita quando indicamos um atributo, e desse atributo indicamos um elemento, depois efetuamos uma opera\303\247\303\243o de busca. O algoritmo percorre toda Tabela e remove a(s) tupla(s) que a busca indicar .</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("WinRemocaoTupla", "Atributo", nullptr));
        label_4->setText(QCoreApplication::translate("WinRemocaoTupla", "Aqui Coloque o Atributo de busca para a remo\303\247\303\243o", nullptr));
        label_2->setText(QCoreApplication::translate("WinRemocaoTupla", "Elemento desse Atributo", nullptr));
        label_5->setText(QCoreApplication::translate("WinRemocaoTupla", "E aqui o Elemento do atributo para Remo\303\247\303\243o de tupla", nullptr));
        Cancelar->setText(QCoreApplication::translate("WinRemocaoTupla", "Cancelar", nullptr));
        Ok->setText(QCoreApplication::translate("WinRemocaoTupla", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinRemocaoTupla: public Ui_WinRemocaoTupla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINREMOCAOTUPLA_H
