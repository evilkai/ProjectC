#ifndef FORMADMIN_H
#define FORMADMIN_H

#include <QWidget>

namespace Ui {
class FormAdmin;
}

class FormAdmin : public QWidget
{
    Q_OBJECT

public:
    explicit FormAdmin(QWidget *parent = 0);
    ~FormAdmin();

private:
    Ui::FormAdmin *ui;
};

#endif // FORMADMIN_H
