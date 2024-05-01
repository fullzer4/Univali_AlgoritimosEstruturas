#include <iostream>

int main() {
  
  float f, c;
  std::cout << "Insira F: ";
  std::cin >> f;

  c = (5.0 / 9.0 * (f - 32.0));
  std::cout << "Valor em celcius " << c;

  return 0;
}
