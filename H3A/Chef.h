#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include <string>

class Chef {
public:
    Chef(const std::string& name);
    ~Chef();
    void makeSalad() const;
    void makeSoup() const;
    std::string getName() const;

private:
    std::string m_name;
};

#endif // CHEF_H
