#include <iostream>
 
int main () {

int number1, number2, result;
char op;

std::cout << "Enter two numbers and an onperator ";
std::cin >> number1 >> number2 >> op;


switch(op) {
  case '+':
      std::cout << number1 + number2; 
break;
 case '-':
      std::cout << number1 - number2;
break;
 case '*':
      std::cout << number1 * number2;
break;
 case '/':
  if (number2 !=0)
  result = number1 / number2;
  else {
   std::cout << "Error division by zero!" <<std::endl;
return 1;
 }
break;
 defalut:
   std::cout << "Invalid operator!"<< std::endl;
  return 1;
}

std::cout << "Result " << result << std::endl;

return 0;
}
