#ifndef WININSERCAOCORONEL_H
#define WININSERCAOCORONEL_H

#include <QDialog>

namespace Ui {
class winInsercaoCoronel;
}

class winInsercaoCoronel : public QDialog
{
    Q_OBJECT

public:
    explicit winInsercaoCoronel(QWidget *parent, unsigned f);
    ~winInsercaoCoronel();

private slots:
    void on_Ok_clicked();

    void on_Cancelar_clicked();

private:
    Ui::winInsercaoCoronel *ui;
    unsigned flag;
};

#endif // WININSERCAOCORONEL_H
