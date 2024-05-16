/********************************************************************************
** Form generated from reading UI file 'wininsercaocoronel.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WININSERCAOCORONEL_H
#define UI_WININSERCAOCORONEL_H

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

class Ui_winInsercaoCoronel
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cancelar;
    QPushButton *Ok;
    QLabel *label;
    QWidget *layoutWidget_2;
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
    QLineEdit *lineEditIdCoronel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEditCondec;

    void setupUi(QDialog *winInsercaoCoronel)
    {
        if (winInsercaoCoronel->objectName().isEmpty())
            winInsercaoCoronel->setObjectName("winInsercaoCoronel");
        winInsercaoCoronel->resize(746, 481);
        layoutWidget = new QWidget(winInsercaoCoronel);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 320, 411, 31));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        Cancelar = new QPushButton(layoutWidget);
        Cancelar->setObjectName("Cancelar");

        horizontalLayout_8->addWidget(Cancelar);

        Ok = new QPushButton(layoutWidget);
        Ok->setObjectName("Ok");

        horizontalLayout_8->addWidget(Ok);

        label = new QLabel(winInsercaoCoronel);
        label->setObjectName("label");
        label->setGeometry(QRect(57, 48, 141, 21));
        layoutWidget_2 = new QWidget(winInsercaoCoronel);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(37, 88, 411, 227));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        lineEditMilitar = new QLineEdit(layoutWidget_2);
        lineEditMilitar->setObjectName("lineEditMilitar");

        horizontalLayout->addWidget(lineEditMilitar);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEditNome = new QLineEdit(layoutWidget_2);
        lineEditNome->setObjectName("lineEditNome");

        horizontalLayout_2->addWidget(lineEditNome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        idade = new QLabel(layoutWidget_2);
        idade->setObjectName("idade");

        horizontalLayout_3->addWidget(idade);

        lineEditIdade = new QLineEdit(layoutWidget_2);
        lineEditIdade->setObjectName("lineEditIdade");

        horizontalLayout_3->addWidget(lineEditIdade);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        datadenascimento = new QLabel(layoutWidget_2);
        datadenascimento->setObjectName("datadenascimento");

        horizontalLayout_4->addWidget(datadenascimento);

        lineEditDatNasc = new QLineEdit(layoutWidget_2);
        lineEditDatNasc->setObjectName("lineEditDatNasc");

        horizontalLayout_4->addWidget(lineEditDatNasc);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        lineEditCPF = new QLineEdit(layoutWidget_2);
        lineEditCPF->setObjectName("lineEditCPF");

        horizontalLayout_5->addWidget(lineEditCPF);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        lineEditIdCoronel = new QLineEdit(layoutWidget_2);
        lineEditIdCoronel->setObjectName("lineEditIdCoronel");

        horizontalLayout_6->addWidget(lineEditIdCoronel);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        lineEditCondec = new QLineEdit(layoutWidget_2);
        lineEditCondec->setObjectName("lineEditCondec");

        horizontalLayout_7->addWidget(lineEditCondec);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(winInsercaoCoronel);

        QMetaObject::connectSlotsByName(winInsercaoCoronel);
    } // setupUi

    void retranslateUi(QDialog *winInsercaoCoronel)
    {
        winInsercaoCoronel->setWindowTitle(QCoreApplication::translate("winInsercaoCoronel", "Dialog", nullptr));
        Cancelar->setText(QCoreApplication::translate("winInsercaoCoronel", "Cancelar", nullptr));
        Ok->setText(QCoreApplication::translate("winInsercaoCoronel", "Ok", nullptr));
        label->setText(QCoreApplication::translate("winInsercaoCoronel", "Inser\303\247\303\243o de Coronel", nullptr));
        label_5->setText(QCoreApplication::translate("winInsercaoCoronel", "Identidade Militar", nullptr));
        label_3->setText(QCoreApplication::translate("winInsercaoCoronel", "Nome", nullptr));
        idade->setText(QCoreApplication::translate("winInsercaoCoronel", "Idade", nullptr));
        datadenascimento->setText(QCoreApplication::translate("winInsercaoCoronel", "Data de Nascimento", nullptr));
        label_7->setText(QCoreApplication::translate("winInsercaoCoronel", "CPF", nullptr));
        label_2->setText(QCoreApplication::translate("winInsercaoCoronel", "Identidade do Coronel", nullptr));
        label_8->setText(QCoreApplication::translate("winInsercaoCoronel", "Condecora\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class winInsercaoCoronel: public Ui_winInsercaoCoronel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WININSERCAOCORONEL_H
