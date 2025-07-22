#include <iostream>


int main () {

int N;
	std::cout << "Enter number of elements ";
	std::cin >> N;

  int arr[N];
  
  std::cout << "Enter " << N << "numbers ";
	for ( int i = 0; i < N; i++) {
  std::cin >> arr[i];
	
 }  

 int* ptr = arr + N - 1;
  
   std::cout << "Reversed ";
   for (int i = 0; i < N; ++i) {
   std::cout << *ptr << " ";
   ptr--;
 }  

 std::cout << std::endl;
 return 0; 

}
