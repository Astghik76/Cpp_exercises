#include <iostream>

 int main () {

 int n;
  std::cout << "Enter number of elements: ";
  std::cin >> n;


 int* arr = new int[n];

  std::cout << "Enter " << n << "numbers: ";
   for (int i = 0; i < n; ++i)  {
      std::cin >> arr[i];
   }
 int sum = 0;
    for(int i = 0; i < n; ++i) {
     sum += arr[i];
    }

   double average = static_cast<double>(sum) /n;
  std::cout << "Average:" << average <<std::endl;

   delete[] arr;

  return 0;
} 
