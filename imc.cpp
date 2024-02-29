#include <iostream>
#include <string>

std::string imc(double mass, double height) {
    double indice = mass / (height * height);
    
    if (indice < 17) {
        return "Muito abaixo do peso";
    } else if (indice < 18.5) {
        return "Abaixo do peso";
    } else if (indice < 25) {
        return "Peso normal";
    } else if (indice < 30) {
        return "Acima do peso";
    } else if (indice < 35) {
        return "Obesidade";
    } else if (indice < 40) {
        return "Obesidade severa";
    } else {
        return "Obesidade mórbida";
    }
}

int main() {
    std::cout << "Cheque seu IMC!" << "\n";
    
    std::cout << imc(70.5, 1.75) << "\n";
    std::cout << imc(120.9, 1.90) << "\n";
    std::cout << imc(50, 1.60) << "\n";
    std::cout << imc(50, 1.70) << "\n";
    std::cout << imc(102, 2) << "\n";

    return 0;
}