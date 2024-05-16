/********************************************************************************
** Form generated from reading UI file 'operacoes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERACOES_H
#define UI_OPERACOES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Operacoes
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonInsercao;
    QPushButton *pushButtonRemocao;
    QPushButton *pushButtonBusca;
    QPushButton *pushButtonModificacao;

    void setupUi(QDialog *Operacoes)
    {
        if (Operacoes->objectName().isEmpty())
            Operacoes->setObjectName("Operacoes");
        Operacoes->resize(789, 442);
        label = new QLabel(Operacoes);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 70, 71, 16));
        widget = new QWidget(Operacoes);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 110, 111, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonInsercao = new QPushButton(widget);
        pushButtonInsercao->setObjectName("pushButtonInsercao");

        verticalLayout->addWidget(pushButtonInsercao);

        pushButtonRemocao = new QPushButton(widget);
        pushButtonRemocao->setObjectName("pushButtonRemocao");

        verticalLayout->addWidget(pushButtonRemocao);

        pushButtonBusca = new QPushButton(widget);
        pushButtonBusca->setObjectName("pushButtonBusca");

        verticalLayout->addWidget(pushButtonBusca);

        pushButtonModificacao = new QPushButton(widget);
        pushButtonModificacao->setObjectName("pushButtonModificacao");

        verticalLayout->addWidget(pushButtonModificacao);


        retranslateUi(Operacoes);

        QMetaObject::connectSlotsByName(Operacoes);
    } // setupUi

    void retranslateUi(QDialog *Operacoes)
    {
        Operacoes->setWindowTitle(QCoreApplication::translate("Operacoes", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Operacoes", "Opera\303\247\303\265es", nullptr));
        pushButtonInsercao->setText(QCoreApplication::translate("Operacoes", "Inser\303\247\303\243o", nullptr));
        pushButtonRemocao->setText(QCoreApplication::translate("Operacoes", "Remo\303\247\303\243o", nullptr));
        pushButtonBusca->setText(QCoreApplication::translate("Operacoes", "Busca", nullptr));
        pushButtonModificacao->setText(QCoreApplication::translate("Operacoes", "Modifica\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Operacoes: public Ui_Operacoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERACOES_H
