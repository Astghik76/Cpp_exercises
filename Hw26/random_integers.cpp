#include <iostream>
#include <cstdlib>
#include <ctime> 

  const int SIZE = 10;
 
void Array(int * pArr) {
  for (int i = 0; i < SIZE; ++i) {
    pArr[i] = rand() % 100;

   }
 
  }
 
int main () {

 srand(time (0));

 int arr[SIZE];
  Array(arr);

std::cout << "Random array: ";
  for (int i = 0; i < SIZE; ++i) {
  std:: cout << arr[i] << " ";

  }
 
 	return 0;

}
