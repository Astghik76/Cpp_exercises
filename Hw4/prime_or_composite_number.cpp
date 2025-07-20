#include<iostream>
int main () {

int a;
bool is_prime = true;

std::cout << "Enter a positive intager  ";
std::cin >> a;

if (a <= 1) {

std::cout << "Neither prime nor composite " << std::endl;
} else {

for (int i = 2; i <= a / 2; ++i) {
if (a % i == 0) {
is_prime = false;
break;
  }
}

if (is_prime)
std::cout << a << "  is a prime number " << std::endl;
else
std::cout << a << "  is a composite number "  << std::endl;

}

return 0;

}


