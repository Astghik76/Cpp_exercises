#include <iostream>

int gcd(int a, int b) {
    if (b == 0)
  return a;  // Base case
 return gcd(b, a % b);  // Recursive step
}

int main() {
 int a, b;
  std::cout << "Enter two integers: ";
  std::cin >> a >> b;
  std::cout << "GCD is: " << gcd(a, b) << std::endl;
 return 0;
}

