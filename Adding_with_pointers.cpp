#include <iostream>

int main () {

int a, b;
int* pA = &a;
int* pB = &b;

  std::cout << " Enter number ";
  std::cin >> *pA;

  std::cout << " Enter number ";
  std::cin >> *pB;

  int sum = *pA + *pB;
  std::cout << "Sum is " << sum << std::endl;

  return 0;

}
