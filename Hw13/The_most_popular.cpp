#include <iostream>
#include <vector>
#include <unordered_map>

int main () {

int N;

 std::cout << "Enter number ";
 std::cin >> N;
 
std::vector<int> arr(N);
std::unordered_map<int, int> freq;

 
   for (int i = 0; i < N; ++i) { 
   std::cin >> arr[i];
   freq[arr[i]]++; 

    }

   int max_count = 0;
   int most_frequent;

   for (int i = 0; i < N; ++i) {
    int value = arr[i];
   if (freq[value] > max_count) {
    max_count = freq[value];
    most_frequent = value;
            
    }
 } 

std::cout << most_frequent << std::endl;
  return 0;
}
