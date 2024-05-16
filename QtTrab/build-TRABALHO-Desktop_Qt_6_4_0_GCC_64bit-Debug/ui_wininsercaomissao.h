/********************************************************************************
** Form generated from reading UI file 'wininsercaomissao.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WININSERCAOMISSAO_H
#define UI_WININSERCAOMISSAO_H

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

class Ui_WinInsercaoMissao
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
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEditIdMissao;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditTipoMissao;
    QHBoxLayout *horizontalLayout_3;
    QLabel *idade;
    QLineEdit *lineEditObjetivo;
    QHBoxLayout *horizontalLayout_4;
    QLabel *datadenascimento;
    QLineEdit *lineEditBrigadaResponsavel;

    void setupUi(QDialog *WinInsercaoMissao)
    {
        if (WinInsercaoMissao->objectName().isEmpty())
            WinInsercaoMissao->setObjectName("WinInsercaoMissao");
        WinInsercaoMissao->resize(820, 424);
        label = new QLabel(WinInsercaoMissao);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 40, 141, 16));
        layoutWidget_2 = new QWidget(WinInsercaoMissao);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(50, 260, 411, 31));
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

        layoutWidget = new QWidget(WinInsercaoMissao);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 80, 411, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        lineEditIdMissao = new QLineEdit(layoutWidget);
        lineEditIdMissao->setObjectName("lineEditIdMissao");

        horizontalLayout->addWidget(lineEditIdMissao);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEditTipoMissao = new QLineEdit(layoutWidget);
        lineEditTipoMissao->setObjectName("lineEditTipoMissao");

        horizontalLayout_2->addWidget(lineEditTipoMissao);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        idade = new QLabel(layoutWidget);
        idade->setObjectName("idade");

        horizontalLayout_3->addWidget(idade);

        lineEditObjetivo = new QLineEdit(layoutWidget);
        lineEditObjetivo->setObjectName("lineEditObjetivo");

        horizontalLayout_3->addWidget(lineEditObjetivo);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        datadenascimento = new QLabel(layoutWidget);
        datadenascimento->setObjectName("datadenascimento");

        horizontalLayout_4->addWidget(datadenascimento);

        lineEditBrigadaResponsavel = new QLineEdit(layoutWidget);
        lineEditBrigadaResponsavel->setObjectName("lineEditBrigadaResponsavel");

        horizontalLayout_4->addWidget(lineEditBrigadaResponsavel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(WinInsercaoMissao);

        QMetaObject::connectSlotsByName(WinInsercaoMissao);
    } // setupUi

    void retranslateUi(QDialog *WinInsercaoMissao)
    {
        WinInsercaoMissao->setWindowTitle(QCoreApplication::translate("WinInsercaoMissao", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("WinInsercaoMissao", "Inser\303\247\303\243o de Miss\303\265es", nullptr));
        Cancelar->setText(QCoreApplication::translate("WinInsercaoMissao", "Cancelar", nullptr));
        Ok->setText(QCoreApplication::translate("WinInsercaoMissao", "Ok", nullptr));
        label_5->setText(QCoreApplication::translate("WinInsercaoMissao", "Identifica\303\247\303\243o da miss\303\243o", nullptr));
        label_3->setText(QCoreApplication::translate("WinInsercaoMissao", "Tipo de Miss\303\243o", nullptr));
        idade->setText(QCoreApplication::translate("WinInsercaoMissao", "Objetivo", nullptr));
        datadenascimento->setText(QCoreApplication::translate("WinInsercaoMissao", "Brigada Responsavel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinInsercaoMissao: public Ui_WinInsercaoMissao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WININSERCAOMISSAO_H
