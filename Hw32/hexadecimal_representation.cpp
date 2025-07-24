#include <iostream>
#include <string>

 std::string Hexadecimal(int number) {
   if (number == 0) {
     return 0;
   }
  

    std::string hexadecimal = "";
    std::string hexDigits = "0123456789ABCDEF";
 
   while (number > 0) {
    int remainder = number % 16;
    hexadecimal = hexDigits[remainder] + hexadecimal;
    number = number / 16;
 
     }
      return hexadecimal;
  } 

int main() {
 int number; 

 std::cout << "Enter a positive number "; 
 std::cin >> number;

 std::string hexadecimalResult = Hexadecimal(number);
 std::cout << "Hexadecimal representation " << hexadecimalResult << std::endl; 

 return 0;

   }

