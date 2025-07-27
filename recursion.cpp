#include <iostream>

void printNumbers(int n) {
 if (n == 0) return;         
   printNumbers(n - 1);           
std::cout << n << " ";      
}

int main() {
 int N;
 std::cout << "Enter number ";
 std::cin >> N;
    printNumbers(N);
 std::cout << "\n";
    return 0;
}

