#include <iostream>
#include <cmath>

int main() {
    float raio;

    std::cout << "Insira seu raio: " << std::endl;
    std::cin >> raio;
    float area = M_PI * pow(raio, 2);
    float comprimento = 2 * M_PI * raio;
    std::cout << "A área do círculo é: " << area << std::endl;
    std::cout << "O comprimento do círculo é: " << comprimento << std::endl;
    return 0;
}
