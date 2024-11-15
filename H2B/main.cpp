#include <iostream>
#include <vector>
#include "car.h"

int main() {
    std::vector<Car> carList;

    Car car1("Toyota", "Corolla", 2020);
    Car car2("Kupla", "Volkkari", 1996);
    Car car3("Volvo", "V70", 2011);
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    std::cout << "Toisen auton tiedot:" << std::endl;
    carList[1].printData();

    std::cout << "\nKaikkien autojen tiedot:" << std::endl;
    for (const auto &car : carList) {
        car.printData();
    }

    return 0;
}
