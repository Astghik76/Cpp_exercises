#include <iostream>

int main () {

 int N;
 
 std::cout << "Enter " << N << "numbers ";
 std::cin >> N;

  int arr[100];
  std::cout << "Enter " << N << " numbers ";
  for (int i = 0; i < N; ++i) {
  std::cin >> arr[i];

 }

   int sum = 0; 
   for (int i = 0; i < N; ++i) {
   if (i % 3 == 0 || i % 5 == 0) {
      sum += arr[i];
 
    }

  }

	std::cout << "Sum of elements at indices divisible by 3 or 5: " << sum << std::endl;

 return 0;
}
