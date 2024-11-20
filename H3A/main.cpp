#include <QCoreApplication>
#include "Chef.h"
#include "ItalianChef.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Chef* chef = new Chef("Gordon Ramsay");

    chef->makeSalad();
    chef->makeSoup();

    delete chef;

    ItalianChef* italianChef = new ItalianChef("Anthony Bourdain");

    italianChef->makeSalad();
    italianChef->makeSoup();
    italianChef->makePasta();

    std::cout << "name of the Italian Chef is " << italianChef->getName() << std::endl;

    delete italianChef;

    return a.exec();
}
