#include <iostream>

int main() {
    int n;
    std::cout << "Digite um número inteiro: ";
    std::cin >> n;

    int quantidadeDivisores = 0;

    std::cout << "Divisores de " << n << ": ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            std::cout << i;
            quantidadeDivisores++;

            if (i != n) {
                std::cout << ", ";
            }
        }
    }

    std::cout << "\nQuantidade de divisores de " << n << ": " << quantidadeDivisores << std::endl;

    return 0;
}
