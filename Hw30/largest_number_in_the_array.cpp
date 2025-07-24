#include <iostream> 
 
 int MaxIndex(int* arr, int size){
 int maxIndex = 0;

    for (int i = 1; i < size; ++i) {
       if (arr[i] > arr[maxIndex]) {
          maxIndex = i; 
     }

   } 
      return maxIndex;
}
 int main() {

 int numbers[] = {12, 50, 25, 66, 85};
 int size = sizeof(numbers) / sizeof(numbers[0]);

 int maxIndx = MaxIndex(numbers, size);
 std::cout << "Max number is at index: " << maxIndx << std::endl;
 
  return 0;
 }
