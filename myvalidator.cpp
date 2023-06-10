
#include "myvalidator.h"
#include "./ui_myvalidator.h"

void MyValidator::init(QString pat)
{
    pattern   = pat;
    reg       = QRegularExpression(pat);
    validator = new QRegularExpressionValidator(reg, this);
}
MyValidator::MyValidator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyValidator)
{
    ui->setupUi(this);
    init("[аоїієюяу]{3,20}");
    ui->lineEdit->setValidator(validator);
}

MyValidator::~MyValidator()
{
    delete ui;
}


