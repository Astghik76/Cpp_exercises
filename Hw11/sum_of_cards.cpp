#include <iostream>
int main () {

int N;

std::cout << "Enter sum_of_card "; 
std::cin >> N; 
 int sum = N * (N + 1) / 2;
 
 for (int i = 0; i < N - 1; ++i) {
 int card;
 std::cin >> card;
 sum -= card; 

   }
     std::cout << sum << std::endl;
     return 0;
}
