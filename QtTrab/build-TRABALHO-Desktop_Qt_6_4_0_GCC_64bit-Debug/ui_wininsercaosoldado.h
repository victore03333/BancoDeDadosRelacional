/********************************************************************************
** Form generated from reading UI file 'wininsercaosoldado.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WININSERCAOSOLDADO_H
#define UI_WININSERCAOSOLDADO_H

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

class Ui_WinInsercaoSoldado
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cancelar;
    QPushButton *Ok;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEditMilitar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditNome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *idade;
    QLineEdit *lineEditIdade;
    QHBoxLayout *horizontalLayout_4;
    QLabel *datadenascimento;
    QLineEdit *lineEditDatNasc;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEditCPF;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEditIdSoldado;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEditDatdeIngress;
    QLabel *label;

    void setupUi(QDialog *WinInsercaoSoldado)
    {
        if (WinInsercaoSoldado->objectName().isEmpty())
            WinInsercaoSoldado->setObjectName("WinInsercaoSoldado");
        WinInsercaoSoldado->resize(913, 598);
        layoutWidget_2 = new QWidget(WinInsercaoSoldado);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(63, 292, 411, 31));
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

        layoutWidget = new QWidget(WinInsercaoSoldado);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 60, 411, 227));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        lineEditMilitar = new QLineEdit(layoutWidget);
        lineEditMilitar->setObjectName("lineEditMilitar");

        horizontalLayout->addWidget(lineEditMilitar);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEditNome = new QLineEdit(layoutWidget);
        lineEditNome->setObjectName("lineEditNome");

        horizontalLayout_2->addWidget(lineEditNome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        idade = new QLabel(layoutWidget);
        idade->setObjectName("idade");

        horizontalLayout_3->addWidget(idade);

        lineEditIdade = new QLineEdit(layoutWidget);
        lineEditIdade->setObjectName("lineEditIdade");

        horizontalLayout_3->addWidget(lineEditIdade);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        datadenascimento = new QLabel(layoutWidget);
        datadenascimento->setObjectName("datadenascimento");

        horizontalLayout_4->addWidget(datadenascimento);

        lineEditDatNasc = new QLineEdit(layoutWidget);
        lineEditDatNasc->setObjectName("lineEditDatNasc");

        horizontalLayout_4->addWidget(lineEditDatNasc);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        lineEditCPF = new QLineEdit(layoutWidget);
        lineEditCPF->setObjectName("lineEditCPF");

        horizontalLayout_5->addWidget(lineEditCPF);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        lineEditIdSoldado = new QLineEdit(layoutWidget);
        lineEditIdSoldado->setObjectName("lineEditIdSoldado");

        horizontalLayout_6->addWidget(lineEditIdSoldado);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        lineEditDatdeIngress = new QLineEdit(layoutWidget);
        lineEditDatdeIngress->setObjectName("lineEditDatdeIngress");

        horizontalLayout_7->addWidget(lineEditDatdeIngress);


        verticalLayout->addLayout(horizontalLayout_7);

        label = new QLabel(WinInsercaoSoldado);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 141, 21));

        retranslateUi(WinInsercaoSoldado);

        QMetaObject::connectSlotsByName(WinInsercaoSoldado);
    } // setupUi

    void retranslateUi(QDialog *WinInsercaoSoldado)
    {
        WinInsercaoSoldado->setWindowTitle(QCoreApplication::translate("WinInsercaoSoldado", "Dialog", nullptr));
        Cancelar->setText(QCoreApplication::translate("WinInsercaoSoldado", "Cancelar", nullptr));
        Ok->setText(QCoreApplication::translate("WinInsercaoSoldado", "Ok", nullptr));
        label_5->setText(QCoreApplication::translate("WinInsercaoSoldado", "Identidade Militar", nullptr));
        label_3->setText(QCoreApplication::translate("WinInsercaoSoldado", "Nome", nullptr));
        idade->setText(QCoreApplication::translate("WinInsercaoSoldado", "Idade", nullptr));
        datadenascimento->setText(QCoreApplication::translate("WinInsercaoSoldado", "Data de Nascimento", nullptr));
        label_7->setText(QCoreApplication::translate("WinInsercaoSoldado", "CPF", nullptr));
        label_2->setText(QCoreApplication::translate("WinInsercaoSoldado", "Identidade do Soldado", nullptr));
        label_8->setText(QCoreApplication::translate("WinInsercaoSoldado", "Data de Ingresso", nullptr));
        label->setText(QCoreApplication::translate("WinInsercaoSoldado", "Inser\303\247\303\243o de Soldado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinInsercaoSoldado: public Ui_WinInsercaoSoldado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WININSERCAOSOLDADO_H
