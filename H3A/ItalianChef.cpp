#include "ItalianChef.h"

ItalianChef::ItalianChef(const std::string& name) : Chef(name) {
    std::cout << "ItalianChef " << getName() << " konstruktori" << std::endl;
}

void ItalianChef::makePasta() const {
    std::cout << "ItalianChef " << getName() << " makes pasta" << std::endl;
}

std::string ItalianChef::getName() const {
    return Chef::getName();
}
