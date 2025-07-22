#include <iostream>

int main () {

int N;

 std::cout << " Enter number elements ";
 std::cin >> N;

int arr[100];
   std::cout << "Enter " << N << "numbers ";
   for (int i = 0; i < N; ++i) {
     std::cin >> arr[i];

  } 

 	  int A, B;
 		std::cout << "Enter range A and B ";
		std::cin >> A >> B;

   	int sum = 0;
    std::cout << "Sum of elements from index " << A << B << "to " << B << "is ";

    for (int i = A; i <= B; ++i) {
  
 		sum += arr[i];
    std::cout << arr[i];
 		if (i < B) {
         std::cout << " + ";
    
     }

   } 
	std::cout << " = " << sum << std::endl;

 return 0;

}
