/********************************************************************************
** Form generated from reading UI file 'wininsercaobatalhao.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WININSERCAOBATALHAO_H
#define UI_WININSERCAOBATALHAO_H

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

class Ui_WinInsercaoBatalhao
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEditIdBatalhao;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditCidade;
    QHBoxLayout *horizontalLayout_3;
    QLabel *idade;
    QLineEdit *lineEditendereco;
    QHBoxLayout *horizontalLayout_4;
    QLabel *datadenascimento;
    QLineEdit *lineEditIdCoronel;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cancelar;
    QPushButton *Ok;
    QLabel *label;

    void setupUi(QDialog *WinInsercaoBatalhao)
    {
        if (WinInsercaoBatalhao->objectName().isEmpty())
            WinInsercaoBatalhao->setObjectName("WinInsercaoBatalhao");
        WinInsercaoBatalhao->resize(929, 608);
        layoutWidget = new QWidget(WinInsercaoBatalhao);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 90, 411, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        lineEditIdBatalhao = new QLineEdit(layoutWidget);
        lineEditIdBatalhao->setObjectName("lineEditIdBatalhao");

        horizontalLayout->addWidget(lineEditIdBatalhao);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEditCidade = new QLineEdit(layoutWidget);
        lineEditCidade->setObjectName("lineEditCidade");

        horizontalLayout_2->addWidget(lineEditCidade);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        idade = new QLabel(layoutWidget);
        idade->setObjectName("idade");

        horizontalLayout_3->addWidget(idade);

        lineEditendereco = new QLineEdit(layoutWidget);
        lineEditendereco->setObjectName("lineEditendereco");

        horizontalLayout_3->addWidget(lineEditendereco);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        datadenascimento = new QLabel(layoutWidget);
        datadenascimento->setObjectName("datadenascimento");

        horizontalLayout_4->addWidget(datadenascimento);

        lineEditIdCoronel = new QLineEdit(layoutWidget);
        lineEditIdCoronel->setObjectName("lineEditIdCoronel");

        horizontalLayout_4->addWidget(lineEditIdCoronel);


        verticalLayout->addLayout(horizontalLayout_4);

        layoutWidget_2 = new QWidget(WinInsercaoBatalhao);
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

        label = new QLabel(WinInsercaoBatalhao);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 50, 141, 21));

        retranslateUi(WinInsercaoBatalhao);

        QMetaObject::connectSlotsByName(WinInsercaoBatalhao);
    } // setupUi

    void retranslateUi(QDialog *WinInsercaoBatalhao)
    {
        WinInsercaoBatalhao->setWindowTitle(QCoreApplication::translate("WinInsercaoBatalhao", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("WinInsercaoBatalhao", "Identidade Batalh\303\243o", nullptr));
        label_3->setText(QCoreApplication::translate("WinInsercaoBatalhao", "cidade", nullptr));
        idade->setText(QCoreApplication::translate("WinInsercaoBatalhao", "endere\303\247o", nullptr));
        datadenascimento->setText(QCoreApplication::translate("WinInsercaoBatalhao", "indentidade do Coronel", nullptr));
        Cancelar->setText(QCoreApplication::translate("WinInsercaoBatalhao", "Cancelar", nullptr));
        Ok->setText(QCoreApplication::translate("WinInsercaoBatalhao", "Ok", nullptr));
        label->setText(QCoreApplication::translate("WinInsercaoBatalhao", "Inser\303\247\303\243o de Batalh\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinInsercaoBatalhao: public Ui_WinInsercaoBatalhao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WININSERCAOBATALHAO_H
