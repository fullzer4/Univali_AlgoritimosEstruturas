#include <iostream>
#include <cmath>

int main() {
    float a, b, c, P, area;

    std::cout << "Insira o lado a do triangulo: " << std::endl;
    std::cin >> a;
    std::cout << "Insira o lado b do triangulo: " << std::endl;
    std::cin >> b;
    std::cout << "Insira o lado c do triangulo: " << std::endl;
    std::cin >> c;
    P = (a + b + c)/2;
    area = sqrt((P*(P - a)*(P - b)*(P - c)));
    std::cout << "O area do trianguloé: " << area << std::endl;
    return 0;
}
