#include "Calculator.h"
#include <iostream>

int main() {
    Calculator calc;

 std::cout << "5 + 3 = " << calc.add(5, 3, true) << "\n";
  calc.printMemory();

  std::cout << "10 - 4 = " << calc.subtract(10, 4) << "\n";
    calc.printMemory();  

  std::cout << "6 * 2 = " << calc.multiply(6, 2, true) << "\n";
   calc.printMemory();

 std::cout << "8 / 0 = " << calc.divide(8, 0) << "\n";  
 std::cout << "9 / 3 = " << calc.divide(9, 3, true) << "\n";
  calc.printMemory();

    return 0;
}

