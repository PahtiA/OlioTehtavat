#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory> // Smart pointers

int main() {
    // Vaihe 1: Car-luokka
    Car car;
    car.setBrand("Volvo");
    car.setModel("XC60");
    car.setYearModel(2020);
    car.printData();

    std::cout << "\n";

    // Vaihe 2: Rectangle-luokka
    Rectangle* rect = new Rectangle();
    rect->setWidth(5.0);
    rect->setHeight(10.0);
    std::cout << "Area: " << rect->getArea() << "\n";
    std::cout << "Circumference: " << rect->getCircum() << "\n";
    delete rect;

    std::cout << "\n";

    // Vaihe 3: Student-luokka
    auto student = std::make_unique<Student>();
    student->setName("Jari Litmanen");
    student->setStudentNumber(12345);
    student->setAverage(4.5);

    std::cout << "Name: " << student->getName() << "\n";
    std::cout << "Student Number: " << student->getStudentNumber() << "\n";
    std::cout << "Average: " << student->getAverage() << "\n";

    return 0;
}
