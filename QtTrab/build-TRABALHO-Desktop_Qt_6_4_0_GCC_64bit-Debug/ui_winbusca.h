/********************************************************************************
** Form generated from reading UI file 'winbusca.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINBUSCA_H
#define UI_WINBUSCA_H

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

class Ui_WinBusca
{
public:
    QLabel *label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cancelar;
    QPushButton *Ok;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditAtributo;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEditElementoAtt;

    void setupUi(QDialog *WinBusca)
    {
        if (WinBusca->objectName().isEmpty())
            WinBusca->setObjectName("WinBusca");
        WinBusca->resize(913, 555);
        label = new QLabel(WinBusca);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 91, 21));
        layoutWidget_2 = new QWidget(WinBusca);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(80, 130, 301, 31));
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

        layoutWidget = new QWidget(WinBusca);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 60, 300, 62));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEditAtributo = new QLineEdit(layoutWidget);
        lineEditAtributo->setObjectName("lineEditAtributo");

        horizontalLayout_2->addWidget(lineEditAtributo);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEditElementoAtt = new QLineEdit(layoutWidget);
        lineEditElementoAtt->setObjectName("lineEditElementoAtt");

        horizontalLayout->addWidget(lineEditElementoAtt);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(WinBusca);

        QMetaObject::connectSlotsByName(WinBusca);
    } // setupUi

    void retranslateUi(QDialog *WinBusca)
    {
        WinBusca->setWindowTitle(QCoreApplication::translate("WinBusca", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("WinBusca", "Busca tuplas", nullptr));
        Cancelar->setText(QCoreApplication::translate("WinBusca", "Cancelar", nullptr));
        Ok->setText(QCoreApplication::translate("WinBusca", "Ok", nullptr));
        label_2->setText(QCoreApplication::translate("WinBusca", "Atributo", nullptr));
        label_3->setText(QCoreApplication::translate("WinBusca", "Elemento do Atributo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinBusca: public Ui_WinBusca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINBUSCA_H
