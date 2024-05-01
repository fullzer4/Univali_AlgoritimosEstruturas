#include <iostream>
#include <vector>

int main() {
  std::vector<int> divisores;
  int numero;
  int quant = 0;

  std::cout << "Insira o numero: ";
  std::cin >> numero;

  int divisor = numero;
  int res = 0;

  while (divisor != 0) {
    res = numero % divisor;
    if (res == 0) {
      divisores.push_back(divisor);
      quant++;
    }
    divisor--; 
  }

  std::cout << "\nNumero: " << numero;
  std::cout << "\nNumeros divisores: ";
  for (int i = divisores.size() - 1; i >= 0; i--) {
      std::cout << " " << divisores[i] << ",";
  }
  std::cout << "\nQuantidade de divisores: " << quant;

}

