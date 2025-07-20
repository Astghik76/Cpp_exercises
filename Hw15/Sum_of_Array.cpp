#include <iostream>
int main () { 

int N;

std::cout << "Enter number ";
std::cin >> N;

int arr[N];
std::cout << "Enter " << N << " elements ";

  for (int i = 0; i < N; ++i)  {
    std::cin >> arr[i];
  
   }
  
   int sum = 0;
   int* ptr = arr; 

  for (int i = 0; i < N; ++i) {
    sum += *(ptr + i); 
    
   }
     std::cout << "Sum " << sum << std::endl;
    

    return 0;

}
