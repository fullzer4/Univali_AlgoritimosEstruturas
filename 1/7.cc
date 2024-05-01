#include <iostream>
#include <cmath>
#include <ostream>
#include <string>

int main() {
  std::string name;
  float horas, dependentes, salario;

  std::cout << "Insira seu nome: " << std::endl;
  getline(std::cin, name);
  std::cout << "Insira o numero de dependentes: " << std::endl;
  std::cin >> dependentes;
  std::cout << "Insira quantas horas de trabalho: " << std::endl;
  std::cin >> horas;

  salario = ((horas * 10) + ((dependentes * horas) * 60)); 

  std::cout << "O " << name << " voce recebeu bruto: " << salario << std::endl;
  std::cout << "O " << name << " voce recebeu liquido: " <<  salario - (salario * 0.0125) << std::endl;

  return 0;
}
