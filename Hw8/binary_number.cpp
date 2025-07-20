#include <iostream>
#include <string>
 
int main () {

int number;
std::string binary = " ";

std::cout << "Enter a number ";
std::cin >> number;

if (number == 0) {
std::cout << "Binary. 0 " << std::endl;

  }
 
  while (number > 0) {

 int reminder = number % 2;
 binary = std::to_string(reminder) + binary;
 number = number / 2;

  }

std::cout << "Binary " << binary << std::endl;

return 0;

}
