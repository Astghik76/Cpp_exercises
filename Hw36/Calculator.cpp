#include "Calculator.h"
#include <iostream>

Calculator::Calculator() {
    memory = 0.0;
}

double Calculator::add(double a, double b, bool bMemorize) {
 double result = a + b;
  if (bMemorize) memory = result;
 return result;
}

double Calculator::subtract(double a, double b, bool bMemorize) {
 double result = a - b;
  if (bMemorize) memory = result;
  return result;
}

double Calculator::multiply(double a, double b, bool bMemorize) {
 double result = a * b;
  if (bMemorize) memory = result;
return result;
}

double Calculator::divide(double a, double b, bool bMemorize) {
 if (b == 0) {
 std::cerr << "Error: Division by zero!\n";
        return 0;
    }
double result = a / b;
 if (bMemorize) memory = result;
   return result;
}

void Calculator::printMemory() const {
  std::cout << " Memory: " << memory << "\n";
}

