#include <cstdlib>
#include <iostream>

int main() {

  int troco, trocoaux, preco, dado, cem, dez, um;

  std::cout << "escreva o valor da compra: ";
  std::cin >> preco;
  std::cout << "escreva o valor dado: ";
  std::cin >> dado;
  
  troco = dado - preco;

  trocoaux = troco / 100;
  cem = trocoaux % 100;

  trocoaux = troco / 10;
  dez = trocoaux % 10;

  trocoaux = troco / 1;
  um = trocoaux % 1;
  
  std::cout << "notas de 100: " << cem;
  std::cout << "notas de 10: " << dez;
  std::cout << "notas de 1: " << um;

  return 0;
}
