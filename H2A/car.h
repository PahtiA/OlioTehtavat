#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:

    void setBrand(const std::string& brand);
    void setModel(const std::string& model);
    void setYearModel(int year);


    void printData() const;
};

#endif // CAR_H

