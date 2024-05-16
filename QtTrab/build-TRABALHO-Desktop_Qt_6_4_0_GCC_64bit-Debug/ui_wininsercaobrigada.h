/********************************************************************************
** Form generated from reading UI file 'wininsercaobrigada.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WININSERCAOBRIGADA_H
#define UI_WININSERCAOBRIGADA_H

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

class Ui_WinInsercaoBrigada
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
    QLineEdit *lineEditBrigada;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditSetor;
    QHBoxLayout *horizontalLayout_3;
    QLabel *idade;
    QLineEdit *lineEditTipoBrigada;
    QHBoxLayout *horizontalLayout_4;
    QLabel *datadenascimento;
    QLineEdit *lineEditIdentbatalhao;
    QHBoxLayout *horizontalLayout_6;
    QLabel *datadenascimento_2;
    QLineEdit *lineEditSoldado;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEditIdentTenente;

    void setupUi(QDialog *WinInsercaoBrigada)
    {
        if (WinInsercaoBrigada->objectName().isEmpty())
            WinInsercaoBrigada->setObjectName("WinInsercaoBrigada");
        WinInsercaoBrigada->resize(766, 534);
        label = new QLabel(WinInsercaoBrigada);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 36, 141, 20));
        layoutWidget_2 = new QWidget(WinInsercaoBrigada);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(50, 270, 411, 31));
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

        layoutWidget = new QWidget(WinInsercaoBrigada);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 70, 411, 194));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        lineEditBrigada = new QLineEdit(layoutWidget);
        lineEditBrigada->setObjectName("lineEditBrigada");

        horizontalLayout->addWidget(lineEditBrigada);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEditSetor = new QLineEdit(layoutWidget);
        lineEditSetor->setObjectName("lineEditSetor");

        horizontalLayout_2->addWidget(lineEditSetor);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        idade = new QLabel(layoutWidget);
        idade->setObjectName("idade");

        horizontalLayout_3->addWidget(idade);

        lineEditTipoBrigada = new QLineEdit(layoutWidget);
        lineEditTipoBrigada->setObjectName("lineEditTipoBrigada");

        horizontalLayout_3->addWidget(lineEditTipoBrigada);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        datadenascimento = new QLabel(layoutWidget);
        datadenascimento->setObjectName("datadenascimento");

        horizontalLayout_4->addWidget(datadenascimento);

        lineEditIdentbatalhao = new QLineEdit(layoutWidget);
        lineEditIdentbatalhao->setObjectName("lineEditIdentbatalhao");

        horizontalLayout_4->addWidget(lineEditIdentbatalhao);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        datadenascimento_2 = new QLabel(layoutWidget);
        datadenascimento_2->setObjectName("datadenascimento_2");

        horizontalLayout_6->addWidget(datadenascimento_2);

        lineEditSoldado = new QLineEdit(layoutWidget);
        lineEditSoldado->setObjectName("lineEditSoldado");

        horizontalLayout_6->addWidget(lineEditSoldado);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        lineEditIdentTenente = new QLineEdit(layoutWidget);
        lineEditIdentTenente->setObjectName("lineEditIdentTenente");

        horizontalLayout_5->addWidget(lineEditIdentTenente);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(WinInsercaoBrigada);

        QMetaObject::connectSlotsByName(WinInsercaoBrigada);
    } // setupUi

    void retranslateUi(QDialog *WinInsercaoBrigada)
    {
        WinInsercaoBrigada->setWindowTitle(QCoreApplication::translate("WinInsercaoBrigada", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("WinInsercaoBrigada", "Inser\303\247\303\243o de Brigada", nullptr));
        Cancelar->setText(QCoreApplication::translate("WinInsercaoBrigada", "Cancelar", nullptr));
        Ok->setText(QCoreApplication::translate("WinInsercaoBrigada", "Ok", nullptr));
        label_5->setText(QCoreApplication::translate("WinInsercaoBrigada", "Identidade Brigada", nullptr));
        label_3->setText(QCoreApplication::translate("WinInsercaoBrigada", "Setor", nullptr));
        idade->setText(QCoreApplication::translate("WinInsercaoBrigada", "Tipo de Brigada", nullptr));
        datadenascimento->setText(QCoreApplication::translate("WinInsercaoBrigada", "Indentidade Batalh\303\243o", nullptr));
        datadenascimento_2->setText(QCoreApplication::translate("WinInsercaoBrigada", "Indentidade Soldado", nullptr));
        label_7->setText(QCoreApplication::translate("WinInsercaoBrigada", "Identidade de Tenente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinInsercaoBrigada: public Ui_WinInsercaoBrigada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WININSERCAOBRIGADA_H
