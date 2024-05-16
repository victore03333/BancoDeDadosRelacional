#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Coronel_clicked();

    void on_Tenente_clicked();

    void on_Soldado_clicked();

    void on_Brigada_clicked();

    void on_Batalhao_clicked();

    void on_Armamento_clicked();

    void on_Missao_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
