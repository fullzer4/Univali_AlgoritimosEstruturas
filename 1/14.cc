#include <iostream>

int main() {

  int a, b, result;

  std::cout << "Escreva o valor de a: ";
  std::cin >> a;
  std::cout << "Escreva o valor de b: ";
  std::cin >> b;

  result = ((a+b) + abs(a-b)) / 2;

  std::cout << "O resultado e: " << result;
  return 0;
}
