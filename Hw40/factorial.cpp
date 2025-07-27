#include <iostream>

unsigned long long factorial(int n) {
 if (n <= 1) return 1;
   return n * factorial(n - 1);
}

int main() {
 int N;
  std::cout << "Enter a number: ";
   std::cin >> N;

if (N < 0) {
 std::cout << "Factorial is not defined for negative numbers.\n";
   return 1;
    }
 std::cout << "Factorial of " << N << " is " << factorial(N) << "\n";
    return 0;
}

