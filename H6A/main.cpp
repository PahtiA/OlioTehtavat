#include <QCoreApplication>
#include "myclass.h"

int main (int argc, char *argv[]) {
    QCoreApplication app (argc, argv);

    MyClass myObject;
    myObject.raiseMySignal();

    return app.exec();
}
