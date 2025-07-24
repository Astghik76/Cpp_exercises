#include <iostream>

 bool prime(int sumber) {
   if (sumber <= 1) {
     return false; 
     }
  
    for (int i = 2; i <= sumber; ++i) {
        if (sumber % i == 0) {
          return false;

         }
    } 

   return true; 

}  
 
  int main() { 
    int sum;
     std::cout << "Enter sumber ";
     std::cin >> sum; 

     if (prime(sum)) {
      std::cout << sum << " sumber is prime " << std::endl;
     
   } else { 
     std::cout << sum << " number isn't prime " << std:: endl;

 }
    return 0; 
  } 
