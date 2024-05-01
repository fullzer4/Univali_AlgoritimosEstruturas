#include <iostream>

int main() {

  int a, b, c, d, e, f, x, y;

  std::cout << "Escreva a: ";
  std::cin >> a;
  std::cout << "Escreva b: ";
  std::cin >> b;
  std::cout << "Escreva c: ";
  std::cin >> c;
  std::cout << "Escreva d: ";
  std::cin >> d;
  std::cout << "Escreva e: ";
  std::cin >> e;
  std::cout << "Escreva f: ";
  std::cin >> f;

  x = ((c*e) - (b*f)) / ((a*e) - (b*d));
  y = ((a*f) - (c*d)) / ((a*e) - (b*d));

  std::cout << "O valor de x é: " << x << " o valor de y é: " << y;

  return 0;
}
