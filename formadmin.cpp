#include "formadmin.h"
#include "ui_formadmin.h"

FormAdmin::FormAdmin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAdmin)
{
    ui->setupUi(this);
}

FormAdmin::~FormAdmin()
{
    delete ui;
}
