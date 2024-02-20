#include <iostream>

int main() {
  int a = 0;
  int b = 1;
  int sum = 0;
  while (a < 4000000) {
    int c = a;
    a = b;
    b += c;
    if (b % 2 == 0) {
      sum += b;
    }
  }
  std::cout << sum << '\n';
}
