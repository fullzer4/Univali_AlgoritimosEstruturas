#include <iostream>

int main() {

  int a, b, result;

  std::cout << "escreva o valor de a: ";
  std::cin >> a;
  std::cout << "escreva o valor de b: ";
  std::cin >> b;
  
  result = (a + b + std::abs(a - b))/2;

  std::cout << "o valor de b é: " << result;

  return 0;
}
