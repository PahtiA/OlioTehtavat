#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    ExampleClass example;
    example.startToWait();

    return app.exec();
}
