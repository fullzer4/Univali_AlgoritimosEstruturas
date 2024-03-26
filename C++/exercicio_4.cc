#include <iostream>

int main() {
  int a, b;

  std::cin << a;
  std::cin << b;

  if ( a > b && a > c) {
    res = ((a * 5.0) + (b * 2.5) + (c * 2.5)) / 10;
  }
  if ( b > a && b > c) {
    res = ((b * 5.0) + (a * 2.5) + (c * 2.5)) / 10;
  }
  if ( c > b && c > a) {
    res = ((c * 5.0) + (b * 2.5) + (a * 2.5)) / 10;
  }

  std::cout << "a media deles e igual a: " << res;

  return 0;
}
