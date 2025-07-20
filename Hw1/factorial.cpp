#include <iostream>

int main () {

int n, factorial = 1;

std::cout << "Enter a positive number " << std::endl;
std::cin >> n;

if ( n < 0) 
  std::cout << "Error";

else {
   for(int i = 1; i <= n; i++) {
   factorial *= i;   
}

std::cout << "Fctorial of " << n << "is " << factorial << std::endl;
}
  return 0;

}
