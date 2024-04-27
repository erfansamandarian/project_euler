#include <iostream>
#include <cmath>

void primeFactors(long int n) {
  while (n % 2 == 0) {
    std::cout << 2 << " ";
    n = n/2;
  }

  for (long int i = 3; i <= sqrt(n); i = i + 2) {
    while (n % i == 0) {
      std::cout << i << ' ';
      n = n/i;
    }
  }

  if (n > 2)
    std::cout << n << ' ';
}

int main() {
  long int n = 600851475143;
  primeFactors(n);
  return 0;
}
