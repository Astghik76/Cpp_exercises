#include <iostream>
#include <cstdlib>
#include <ctime>     

int main() {
   
    std::srand(std::time(0));

    int secretNumber = std::rand() % 100 + 1;
    int guess;;
    int attempts = 0;

std::cout << "Guess the nuber (between 1 and 100) ";

 do {

   std::cin >> guess;
   attempts++;

if (guess > secretNumber) {

std::cout << "Too high. Try agin ";
  } else if (guess < secretNumber) {
    std::cout << "Too low. Try agin "; 

    }

 } while (guess !=  secretNumber);
  std::cout << "Congratulayions. You guess the number in " << attempts << " tries." << std::endl;

return 0;
}



