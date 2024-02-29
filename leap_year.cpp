#include <iostream>
#include <string>

std::string leap_year(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return "Ano bissexto";
    } else  if (year % 400 == 0) {
        return "Ano bissexto";
    } else {
        return "Ano não-bissexto";
    }
    
}

int main() {
    std::cout << "Será que o ano é bissexto?\n\n";
    
    std::cout << leap_year(400) << "\n";
    std::cout << leap_year(600) << "\n";
    std::cout << leap_year(604) << "\n";
    std::cout << leap_year(1999) << "\n";
    std::cout << leap_year(2000) << "\n";
    std::cout << leap_year(2024) << "\n";

    return 0;
}