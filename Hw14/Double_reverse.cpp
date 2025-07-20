#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int N, A, B, C, D;
   std::cout << "Enter numbers ";
   std::cin >> N >> A >> B >> C >> D;
  
  std::vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        arr[i] = i + 1;
    }

  std::reverse(arr.begin() + (A - 1), arr.begin() + B);
  std::reverse(arr.begin() + (C - 1), arr.begin() + D);
  
        for (int i = 0; i < N; ++i) {
        std::cout << arr[i] << " ";
     }
     std::cout << std::endl;

    return 0;
}

