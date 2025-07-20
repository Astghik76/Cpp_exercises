#include <iostream>

int main () {

int num, sum = 0;
int reverse = 0;
std::cout << "Enter an intager number ";
std::cin >> num;

while (num !=0) {

int digit = num % 10;
reverse = reverse * 10 + digit;
num = num / 10;

  }
 
 std::cout << " Inverse " << reverse << std::endl;

return 0;

}
