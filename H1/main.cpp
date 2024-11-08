#include <iostream>
#include <iomanip>


void calcSum(int a, int b) {
    int summa = a + b;
    std::cout << "Summa: " << summa << std::endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        std::cout << "Virhe: Jakaminen nollalla ei ole sallittua!" << std::endl;
    } else {
        double osamaara = static_cast<double>(a) / b;
        std::cout << "Osamaara: " << std::fixed << std::setprecision(2) << osamaara << std::endl;
    }
}

// Funktiot summan ja osamäärän laskemiseen ja palauttamiseen
int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        std::cout << "Virhe!" << std::endl;
        return 0;
    } else {
        return static_cast<float>(a) / b;
    }
}
int main() {

    int a, b;


    std::cout << "Anna ensimmäinen luku (a): ";
    std::cin >> a;

    std::cout << "Anna toinen luku (b): ";
    std::cin >> b;


    calcSum(a, b);
    calcDiv(a, b);


    int sum = retSum(a, b);
    float div = retDiv(a, b);

    std::cout << "Palautettu summa: " << sum << std::endl;
    if (b != 0) {
        std::cout << "Palautettu osamaara: " << std::fixed << std::setprecision(2) << div << std::endl;
    }

    return 0;
}
