#ifndef WININSERCAOARMAMENTO_H
#define WININSERCAOARMAMENTO_H

#include <QDialog>

namespace Ui {
class WinInsercaoArmamento;
}

class WinInsercaoArmamento : public QDialog
{
    Q_OBJECT

public:
    explicit WinInsercaoArmamento(QWidget *parent, unsigned f);
    ~WinInsercaoArmamento();

private slots:
    void on_Ok_clicked();

    void on_Cancelar_clicked();

private:
    Ui::WinInsercaoArmamento *ui;
    unsigned flag;
};

#endif // WININSERCAOARMAMENTO_H
