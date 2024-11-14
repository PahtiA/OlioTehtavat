#include "car.h"

void Car::setBrand(const std::string& brand) {
    this->brand = brand;
}

void Car::setModel(const std::string& model) {
    this->model = model;
}

void Car::setYearModel(int year) {
    this->yearModel = year;
}

void Car::printData() const {
    std::cout << "Brand: " << brand << "\nModel: " << model << "\nYear: " << yearModel << std::endl;
}
