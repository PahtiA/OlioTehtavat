#include "Chef.h"

Chef::Chef(const std::string& name) : m_name(name) {
    std::cout << "Chef " << m_name << " konstruktori" << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef " << m_name << " destruktori" << std::endl;
}

void Chef::makeSalad() const {
    std::cout << "Chef " << m_name << " makes salad" << std::endl;
}

void Chef::makeSoup() const {
    std::cout << "Chef " << m_name << " makes soup" << std::endl;
}

std::string Chef::getName() const {
    return m_name;
}
