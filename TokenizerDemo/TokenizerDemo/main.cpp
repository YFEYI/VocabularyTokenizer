#include "QtBaseGui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtBaseGui w;
    w.show();
    return a.exec();
}
