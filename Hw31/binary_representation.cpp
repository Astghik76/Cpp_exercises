#include <iostream>
#include <string>
 

std::string Binary(int number) {
std::string binary = "";

 if (number == 0) {
  return 0;

   } 

while (number > 0) {
 int bit = number & 1;
  binary = std::to_string(bit) + binary;
   number = number >> 1; 
 }

  return binary;

 } 

int main() {
  
 int number;
 std::cout << "Enter a positive number ";
 std::cin >> number;

 std::string binaryResult = Binary(number);
 std::cout << "Binary representation " << binaryResult << std::endl;
  return 0;
 }
