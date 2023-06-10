
#include "myvalidator.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyValidator w;
    w.show();
    return a.exec();
}
