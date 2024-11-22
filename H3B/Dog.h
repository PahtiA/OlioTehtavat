#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    void callOut() const override {
        std::cout << "Koira haukkuu!" << std::endl;
    }

    ~Dog() override {
        std::cout << "Dog destruktori" << std::endl;
    }
};

#endif // DOG_H

