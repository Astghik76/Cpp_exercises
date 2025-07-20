#include <iostream>

int main () {

int num, sum = 0;

std::cout << "Enter an intager ";
std::cin >> num;

if (num < 0) {
  num = -num;

 }

while (num != 0) {

int digit = num % 10;
sum += digit;
num = num /10; 

  }

std::cout << "Sum of digit " << sum << std::endl;

  return 0;
}
