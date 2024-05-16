/********************************************************************************
** Form generated from reading UI file 'wininsercaotenente.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WININSERCAOTENENTE_H
#define UI_WININSERCAOTENENTE_H

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

class Ui_WinInsercaoTenente
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLineEdit *lineEditMilitar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *lineEditNome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *idade;
    QLineEdit *lineEditIdade;
    QHBoxLayout *horizontalLayout_4;
    QLabel *datadenascimento;
    QLineEdit *lineEditDatNasc;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *lineEditCPF;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLineEdit *lineEditIdTenente;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLineEdit *lineEditTempComand;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cancelar;
    QPushButton *Ok;

    void setupUi(QDialog *WinInsercaoTenente)
    {
        if (WinInsercaoTenente->objectName().isEmpty())
            WinInsercaoTenente->setObjectName("WinInsercaoTenente");
        WinInsercaoTenente->resize(844, 529);
        label = new QLabel(WinInsercaoTenente);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 151, 21));
        layoutWidget = new QWidget(WinInsercaoTenente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 70, 411, 227));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout->addWidget(label_9);

        lineEditMilitar = new QLineEdit(layoutWidget);
        lineEditMilitar->setObjectName("lineEditMilitar");

        horizontalLayout->addWidget(lineEditMilitar);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_2->addWidget(label_10);

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
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        horizontalLayout_5->addWidget(label_11);

        lineEditCPF = new QLineEdit(layoutWidget);
        lineEditCPF->setObjectName("lineEditCPF");

        horizontalLayout_5->addWidget(lineEditCPF);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");

        horizontalLayout_6->addWidget(label_12);

        lineEditIdTenente = new QLineEdit(layoutWidget);
        lineEditIdTenente->setObjectName("lineEditIdTenente");

        horizontalLayout_6->addWidget(lineEditIdTenente);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");

        horizontalLayout_7->addWidget(label_13);

        lineEditTempComand = new QLineEdit(layoutWidget);
        lineEditTempComand->setObjectName("lineEditTempComand");

        horizontalLayout_7->addWidget(lineEditTempComand);


        verticalLayout->addLayout(horizontalLayout_7);

        layoutWidget_2 = new QWidget(WinInsercaoTenente);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(70, 300, 411, 31));
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


        retranslateUi(WinInsercaoTenente);

        QMetaObject::connectSlotsByName(WinInsercaoTenente);
    } // setupUi

    void retranslateUi(QDialog *WinInsercaoTenente)
    {
        WinInsercaoTenente->setWindowTitle(QCoreApplication::translate("WinInsercaoTenente", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("WinInsercaoTenente", "Inser\303\247\303\243o de Tenentes", nullptr));
        label_9->setText(QCoreApplication::translate("WinInsercaoTenente", "Identidade Militar", nullptr));
        label_10->setText(QCoreApplication::translate("WinInsercaoTenente", "Nome", nullptr));
        idade->setText(QCoreApplication::translate("WinInsercaoTenente", "Idade", nullptr));
        datadenascimento->setText(QCoreApplication::translate("WinInsercaoTenente", "Data de Nascimento", nullptr));
        label_11->setText(QCoreApplication::translate("WinInsercaoTenente", "CPF", nullptr));
        label_12->setText(QCoreApplication::translate("WinInsercaoTenente", "Identidade do Tenente", nullptr));
        label_13->setText(QCoreApplication::translate("WinInsercaoTenente", "Tempo de comando", nullptr));
        Cancelar->setText(QCoreApplication::translate("WinInsercaoTenente", "Cancelar", nullptr));
        Ok->setText(QCoreApplication::translate("WinInsercaoTenente", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinInsercaoTenente: public Ui_WinInsercaoTenente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WININSERCAOTENENTE_H
