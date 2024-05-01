#include <cmath>
#include <iostream>

int main() {

  int m1, m2, m3, r12, r23, r13, m, kg, g, e;

  std::cout << "Escreva o valor de m1: ";
  std::cin >> m1;
  std::cout << "Escreva o valor de m2: ";
  std::cin >> m2;
  std::cout << "Escreva o valor de m3: ";
  std::cin >> m3;
  std::cout << "Escreva o valor de r12: ";
  std::cin >> r12;
  std::cout << "Escreva o valor de r23: ";
  std::cin >> r23;
  std::cout << "Escreva o valor de r13: ";
  std::cin >> r13;
  std::cout << "Escreva o valor de m: ";
  std::cin >> m;
  std::cout << "Escreva o valor de kg: ";
  std::cin >> kg;

  g = (6.67 * pow(10, -11)) * (pow(m, 2) / pow(kg, 2));
  e = g * (((m1 * m2)/r12) + ((m1 * m3)/r13) + ((m2 * m3)/r23));

  std::cout << "A energia de colisao é igual a: " << e;

  return 0;
}
