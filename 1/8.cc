#include <iostream>
#include <cmath>
#include <ostream>

int main() {
  
  float x1, x2, y1, y2, d;

  std::cout << "Insira o valor de x1: ";
  std::cin >> x1;
  std::cout << "Insira o valor de x2: ";
  std::cin >> x2;
  std::cout << "Insira o valor de y1: ";
  std::cin >> y1;
  std::cout << "Insira o valor de y2: ";
  std::cin >> y2;

  d = sqrt((pow((x2 - x1), 2) + pow((y2 - y1), 2)));

  std::cout << "a distancia entre eles é: " << d;

  return 0;
}
