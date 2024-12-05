#include <iostream>
#include "ClassB.h"
#include "AssosiationA.h"
#include "AggregationA.h"
using namespace std;

int main() {
    // Vaihe 1: Muistiosoitteet, osoittimet ja referenssit
    int a = 5;
    int b = 10;

    int* myPointer = &a;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    myPointer = &b;
    cout << "Pointterin osoittama osoite on: " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    int& refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    // Vaihe 2: Assosiaatio
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout << "Assosiaatio esimerkki:" << endl;
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAss: " << objAss.getBinfo() << endl;

    // Vaihe 3: Aggregaatio
    cout << "Aggregaatio esimerkki:" << endl;
    AggregationA objAggr(objB);
    objAggr.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAggr: " << objAggr.getBinfo() << endl;

    return 0;
}
