#include <iostream>
#include <vector>
#include <iterator> 

void fourSum(const std::vector<int>& nums, int target) {
    auto end = nums.end();

   for (auto it1 = nums.begin(); it1 != end; ++it1) { 
   for (auto it2 = std::next(it1); it2 != end; ++it2) {
   for (auto it3 = std::next(it2); it3 != end; ++it3) {
   for (auto it4 = std::next(it3); it4 != end; ++it4) {
       int sum = *it1 + *it2 + *it3 + *it4;
          if (sum == target) {
   std::cout << "(" << *it1 << ", " << *it2 << ", " << *it3 << ", " << *it4 << ")\n";
  }
     }
   }
       }
    }
  }

int main() {
  std::vector<int> numbers = {1, 0, -1, 0, -2, 2};
  int target = 0;

  std::cout << "4-sum combinations that add to " << target << "\n";
  fourSum(numbers, target);

    return 0;
  }

