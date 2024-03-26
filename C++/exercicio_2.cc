#include <iostream>

int main() {

  int a, b, c, max;

  std::cout << "escreva o valor de a: ";
  std::cin >> a;
  std::cout << "escreva o valor de b: ";
  std::cin >> b;
  std::cout << "escreva o valor de c: ";
  std::cin >> c;

  if ( a > b && a > c) {
    max = a;
  }
  else if ( b > a && b > c ) {
    max = b;
  }
  else if ( c > a && c > b ) {
    max = c;
  }

  std::cout << "Valor mais alto: " << max;

  return 0;
}
