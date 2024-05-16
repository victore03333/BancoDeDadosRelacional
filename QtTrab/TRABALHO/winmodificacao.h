#ifndef WINMODIFICACAO_H
#define WINMODIFICACAO_H

#include <QDialog>

namespace Ui {
class WinModificacao;
}

class WinModificacao : public QDialog
{
    Q_OBJECT

public:
    explicit WinModificacao(QWidget *parent, unsigned f);
    ~WinModificacao();

private slots:
    void on_Ok_clicked();

    void on_Cancelar_clicked();

private:
    Ui::WinModificacao *ui;
    unsigned flag;
};

#endif // WINMODIFICACAO_H
