#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> vec = {5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7};
  std::vector<int> intervals = {2, 4, 3, 7, 5, 3, 4, 6};
  
 std::cout << "Initial vector ";
  for (int x : vec) std::cout << x << " ";
     std::cout << "\n\n";

 for (size_t i = 0; i + 1 < intervals.size(); i += 2) {
  int a = intervals[i], b = intervals[i + 1];
       if (a < 0 || b >= vec.size() || a > b) {
          std::cout << "Invalid range [" << a << ";" << b << "]\n\n";
             continue;
       }

  std::reverse(vec.begin() + a, vec.begin() + b + 1);
     std::cout << "reverse [" << a << ";" << b << "]: ";
       for (int x : vec) std::cout << x << " ";
         std::cout << "\n\n";
     }

    return 0;
}

