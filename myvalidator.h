
#ifndef MYVALIDATOR_H
#define MYVALIDATOR_H

#include <QMainWindow>
#include <QRegularExpressionValidator>


QT_BEGIN_NAMESPACE
namespace Ui { class MyValidator; }
QT_END_NAMESPACE

class MyValidator : public QMainWindow

{
    Q_OBJECT

public:
    MyValidator(QWidget *parent = nullptr);
    ~MyValidator();
    void init(QString pat);

private:
    Ui::MyValidator *ui;
    QString            pattern;
    QRegularExpression reg;
    QValidator         *validator;
};

#endif // MYVALIDATOR_H
