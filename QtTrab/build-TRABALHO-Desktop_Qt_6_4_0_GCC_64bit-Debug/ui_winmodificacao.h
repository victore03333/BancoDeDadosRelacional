/********************************************************************************
** Form generated from reading UI file 'winmodificacao.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINMODIFICACAO_H
#define UI_WINMODIFICACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinModificacao
{
public:
    QLabel *label_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cancelar;
    QPushButton *Ok;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEditAtributo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditElemento;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEditNovoElemento;

    void setupUi(QDialog *WinModificacao)
    {
        if (WinModificacao->objectName().isEmpty())
            WinModificacao->setObjectName("WinModificacao");
        WinModificacao->resize(641, 428);
        label_4 = new QLabel(WinModificacao);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 20, 171, 31));
        layoutWidget_2 = new QWidget(WinModificacao);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(100, 180, 301, 31));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        Cancelar = new QPushButton(layoutWidget_2);
        Cancelar->setObjectName("Cancelar");

        horizontalLayout_8->addWidget(Cancelar);

        Ok = new QPushButton(layoutWidget_2);
        Ok->setObjectName("Ok");

        horizontalLayout_8->addWidget(Ok);

        widget = new QWidget(WinModificacao);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 84, 301, 91));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        lineEditAtributo = new QLineEdit(widget);
        lineEditAtributo->setObjectName("lineEditAtributo");

        horizontalLayout_3->addWidget(lineEditAtributo);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEditElemento = new QLineEdit(widget);
        lineEditElemento->setObjectName("lineEditElemento");

        horizontalLayout_2->addWidget(lineEditElemento);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEditNovoElemento = new QLineEdit(widget);
        lineEditNovoElemento->setObjectName("lineEditNovoElemento");

        horizontalLayout->addWidget(lineEditNovoElemento);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(WinModificacao);

        QMetaObject::connectSlotsByName(WinModificacao);
    } // setupUi

    void retranslateUi(QDialog *WinModificacao)
    {
        WinModificacao->setWindowTitle(QCoreApplication::translate("WinModificacao", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("WinModificacao", "Modifica\303\247\303\243o de Atributos", nullptr));
        Cancelar->setText(QCoreApplication::translate("WinModificacao", "Cancelar", nullptr));
        Ok->setText(QCoreApplication::translate("WinModificacao", "Ok", nullptr));
        label->setText(QCoreApplication::translate("WinModificacao", "Atributo", nullptr));
        label_2->setText(QCoreApplication::translate("WinModificacao", "Elemento", nullptr));
        label_3->setText(QCoreApplication::translate("WinModificacao", "Novo Elemento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinModificacao: public Ui_WinModificacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINMODIFICACAO_H
