#include "FrameSwitchButtons.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FrameSwitchButtons w;
    w.show();

    return a.exec();
}
