#include <iostream>
#include <cmath>

int main() {
    float a, b, H;

    std::cout << "Comprimento cateto a: " << std::endl;
    std::cin >> a;
    std::cout << "Comprimento cateto b: " << std::endl;
    std::cin >> b;
    H = sqrt((pow(a, 2) + pow(b, 2)));
    std::cout << "O valor da hipotenusa e: " << H << std::endl;
    return 0;
}
