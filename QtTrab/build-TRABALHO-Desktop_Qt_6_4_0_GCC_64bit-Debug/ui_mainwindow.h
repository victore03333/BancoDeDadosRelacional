/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Coronel;
    QPushButton *Tenente;
    QPushButton *Soldado;
    QPushButton *Brigada;
    QPushButton *Batalhao;
    QPushButton *Armamento;
    QPushButton *Missao;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 191, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 70, 151, 225));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        Coronel = new QPushButton(layoutWidget);
        Coronel->setObjectName("Coronel");

        verticalLayout->addWidget(Coronel);

        Tenente = new QPushButton(layoutWidget);
        Tenente->setObjectName("Tenente");

        verticalLayout->addWidget(Tenente);

        Soldado = new QPushButton(layoutWidget);
        Soldado->setObjectName("Soldado");

        verticalLayout->addWidget(Soldado);

        Brigada = new QPushButton(layoutWidget);
        Brigada->setObjectName("Brigada");

        verticalLayout->addWidget(Brigada);

        Batalhao = new QPushButton(layoutWidget);
        Batalhao->setObjectName("Batalhao");

        verticalLayout->addWidget(Batalhao);

        Armamento = new QPushButton(layoutWidget);
        Armamento->setObjectName("Armamento");

        verticalLayout->addWidget(Armamento);

        Missao = new QPushButton(layoutWidget);
        Missao->setObjectName("Missao");

        verticalLayout->addWidget(Missao);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Esquema Ex\303\251rcito Brasileiro", nullptr));
        Coronel->setText(QCoreApplication::translate("MainWindow", "Coronel", nullptr));
        Tenente->setText(QCoreApplication::translate("MainWindow", "Tenente", nullptr));
        Soldado->setText(QCoreApplication::translate("MainWindow", "Soldado", nullptr));
        Brigada->setText(QCoreApplication::translate("MainWindow", "Brigada", nullptr));
        Batalhao->setText(QCoreApplication::translate("MainWindow", "Batalh\303\243o", nullptr));
        Armamento->setText(QCoreApplication::translate("MainWindow", "Armamento", nullptr));
        Missao->setText(QCoreApplication::translate("MainWindow", "Miss\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
