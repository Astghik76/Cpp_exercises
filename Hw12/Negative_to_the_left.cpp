#include <iostream>
#include <vector>

int main () {

int N;

std::cout << "Enter numbers ";
std::cin >> N;

std::vector<int> negative;
std::vector<int> non_negative;

 for (int i = 0; i < N; ++i) {
  int x;
 std::cin >> x;

 if (x < 0) 
   negative.push_back(x);
 else 
   non_negative.push_back(x);

   }
      for(int i = 0; i < negative.size(); ++i)
     std:: cout << negative[i] << " ";
       

      for(int i = 0; i < non_negative.size(); ++i)
      std::cout << non_negative[i] << " ";
      
    std::cout << std::endl;
    return 0;
     
}
