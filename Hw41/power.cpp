#include <iostream>

long long power(int a, int b) {
    if (b == 0) return 1;            
      return a * power(a, b - 1);       
}

int main() {
  int a, b;
 std::cout << "Enter base (a): ";
 std::cin >> a;
 std::cout << "Enter exponent (b): ";
 std::cin >> b;

   if (b < 0) {
 std::cout << "This function doesn't handle negative exponents.\n";
    } else {
 std::cout << a << "^" << b << " = " << power(a, b) << "\n"; 
  }

  return 0;
}

