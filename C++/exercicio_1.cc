#include <iostream>

int main() {

  int numero;

  std::cout << "escreva o seu numero: ";
  std::cin >> numero;

  if ( numero >= 20 && numero <=90 ) {
    std::cout << "numero no intervalo [20, 90]";
  } else {
    std::cout << "numero fora do intervalo [20, 90]";
  }

  return 0;
}
