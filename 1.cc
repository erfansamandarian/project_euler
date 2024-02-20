#include <iostream>

int main() {
  int counter = 0;
  int sum = 0;
  while (counter != 1000) {
    if (counter % 3 == 0 || counter % 5 == 0) {
      sum += counter;
    }
    counter++;
  }
  std::cout << "Sum: " << sum << '\n';
}
