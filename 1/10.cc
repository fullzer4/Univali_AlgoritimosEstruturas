#include <iostream>

int main() {

  int salario, liquido;

  std::cout << "Insira seu salario liquido: ";
  std::cin >> salario;

  liquido = salario - ((salario * 0.10) + (salario * 0.30));
  
  std::cout << "Seu salario liquido: " << liquido;

  return 0;
}
