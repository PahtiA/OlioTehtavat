#include "Car.h"
#include <iostream>

Car::Car() : model(""), brand("") {}

Car::Car(const std::string& brand, const std::string& model)
    : brand(brand), model(model) {}

void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
    objWheel1 = Wheel(17, "kesarengas");
    objWheel2 = Wheel(17, "kesarengas");
    objWheel3 = Wheel(17, "kesarengas");
    objWheel4 = Wheel(17, "kesarengas");
}

std::string Car::getModel() const {
    return model;
}

void Car::setModel(const std::string& model) {
    this->model = model;
}

std::string Car::getBrand() const {
    return brand;
}

void Car::setBrand(const std::string& brand) {
    this->brand = brand;
}

void Car::printDetails() const {
    std::cout << "Auto: " << model << " " << brand << std::endl;
    std::cout << "Moottori: " << objEngine.getHorsepower() << "hp, "
    << objEngine.getDisplacement() << "L" << std::endl;
    std::cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, "
    << objWheel1.getType() << std::endl;
    std::cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, "
    << objWheel2.getType() << std::endl;
    std::cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, "
    << objWheel3.getType() << std::endl;
    std::cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, "
    << objWheel4.getType() << std::endl;
}
