#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector<std::string> nomes;
  std::string nome;
  
  for (int i = 0; i < 4; i++) {
    std::cout << "Digite o nome da pessoa " << (i + 1) << ": ";
    getline(std::cin, nome);
    nomes.push_back(nome);
  }

  std::cout << "\nNomes na ordem inversa:\n";

  for (int i = nomes.size() - 1; i >= 0; i--) {
      std::cout << nomes[i] << std::endl;
  }

  return 0;
}
