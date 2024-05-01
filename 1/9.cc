#include <iostream>

int main() {

  int n1, n2, n3, p1, p2, p3, media;

  std::cout << "Insira n1: ";
  std::cin >> n1;
  std::cout << "Insira o peso de n1: ";
  std::cin >> p1;
  std::cout << "Insira n2: ";
  std::cin >> n2;
  std::cout << "Insira o peso de n2: ";
  std::cin >> p2;
  std::cout << "Insira n3: ";
  std::cin >> n3;
  std::cout << "Insira o peso de n3: ";
  std::cin >> p3;

  media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

  std::cout << "A media é: " << media;

  return  0;
}

