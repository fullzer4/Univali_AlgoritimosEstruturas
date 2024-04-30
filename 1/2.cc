#include <iostream>
#include <cmath>

int main() {
    float raio, altura;

    std::cout << "Insira seu raio: " << std::endl;
    std::cin >> raio;
    std::cout << "Insira sua altura: " << std::endl;
    std::cin >> altura;
    float volume = M_PI * pow(raio, 2) * altura;
    std::cout << "O volume do círculo é: " << volume << std::endl;
    return 0;
}
