#include <iostream>

int main() {
    double soma = 0;

    for (int i = 2; i <= 100; ++i) {
        soma += 1.0 / i;
    }

    std::cout << "A soma da série 1/2 + 1/3 + 1/4 + ... + 1/100 é: " << soma << std::endl;

    return 0;
}
