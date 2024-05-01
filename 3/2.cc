#include <iostream>

int main() {

  int horas = 1;
  int biscHora = 1;
  int total = 0;

  while (horas <= 16) {
    total = total + biscHora;
    horas++;
    biscHora = biscHora * 3;
  }

  std::cout << "Por dia sao quebrados: " << total;

  return 0;
}
