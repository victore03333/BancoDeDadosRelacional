/********************************************************************************
** Form generated from reading UI file 'wininsercaoarmamento.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WININSERCAOARMAMENTO_H
#define UI_WININSERCAOARMAMENTO_H

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

class Ui_WinInsercaoArmamento
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEditIdArm;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditTipoArm;
    QHBoxLayout *horizontalLayout_3;
    QLabel *idade;
    QLineEdit *lineEditNome;
    QHBoxLayout *horizontalLayout_4;
    QLabel *datadenascimento;
    QLineEdit *lineEditidBatalhao;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEditDatFabric;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEditComponente;
    QLabel *label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cancelar;
    QPushButton *Ok;

    void setupUi(QDialog *WinInsercaoArmamento)
    {
        if (WinInsercaoArmamento->objectName().isEmpty())
            WinInsercaoArmamento->setObjectName("WinInsercaoArmamento");
        WinInsercaoArmamento->resize(778, 551);
        layoutWidget = new QWidget(WinInsercaoArmamento);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 110, 411, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        lineEditIdArm = new QLineEdit(layoutWidget);
        lineEditIdArm->setObjectName("lineEditIdArm");

        horizontalLayout->addWidget(lineEditIdArm);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEditTipoArm = new QLineEdit(layoutWidget);
        lineEditTipoArm->setObjectName("lineEditTipoArm");

        horizontalLayout_2->addWidget(lineEditTipoArm);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        idade = new QLabel(layoutWidget);
        idade->setObjectName("idade");

        horizontalLayout_3->addWidget(idade);

        lineEditNome = new QLineEdit(layoutWidget);
        lineEditNome->setObjectName("lineEditNome");

        horizontalLayout_3->addWidget(lineEditNome);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        datadenascimento = new QLabel(layoutWidget);
        datadenascimento->setObjectName("datadenascimento");

        horizontalLayout_4->addWidget(datadenascimento);

        lineEditidBatalhao = new QLineEdit(layoutWidget);
        lineEditidBatalhao->setObjectName("lineEditidBatalhao");

        horizontalLayout_4->addWidget(lineEditidBatalhao);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        lineEditDatFabric = new QLineEdit(layoutWidget);
        lineEditDatFabric->setObjectName("lineEditDatFabric");

        horizontalLayout_5->addWidget(lineEditDatFabric);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        lineEditComponente = new QLineEdit(layoutWidget);
        lineEditComponente->setObjectName("lineEditComponente");

        horizontalLayout_6->addWidget(lineEditComponente);


        verticalLayout->addLayout(horizontalLayout_6);

        label = new QLabel(WinInsercaoArmamento);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 60, 161, 21));
        layoutWidget_2 = new QWidget(WinInsercaoArmamento);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(90, 310, 411, 31));
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


        retranslateUi(WinInsercaoArmamento);

        QMetaObject::connectSlotsByName(WinInsercaoArmamento);
    } // setupUi

    void retranslateUi(QDialog *WinInsercaoArmamento)
    {
        WinInsercaoArmamento->setWindowTitle(QCoreApplication::translate("WinInsercaoArmamento", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("WinInsercaoArmamento", "Identidade do Armamento", nullptr));
        label_3->setText(QCoreApplication::translate("WinInsercaoArmamento", "Tipo de Arma", nullptr));
        idade->setText(QCoreApplication::translate("WinInsercaoArmamento", "Nome", nullptr));
        datadenascimento->setText(QCoreApplication::translate("WinInsercaoArmamento", "Identidade do Batalh\303\243o", nullptr));
        label_7->setText(QCoreApplication::translate("WinInsercaoArmamento", "Data de Fabrica\303\247\303\243o", nullptr));
        label_2->setText(QCoreApplication::translate("WinInsercaoArmamento", "Componente", nullptr));
        label->setText(QCoreApplication::translate("WinInsercaoArmamento", "Inser\303\247\303\243o de Armamento", nullptr));
        Cancelar->setText(QCoreApplication::translate("WinInsercaoArmamento", "Cancelar", nullptr));
        Ok->setText(QCoreApplication::translate("WinInsercaoArmamento", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinInsercaoArmamento: public Ui_WinInsercaoArmamento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WININSERCAOARMAMENTO_H
