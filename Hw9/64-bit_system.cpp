#include <iostream>

int main () {

char a;
int b;
float c;
double d;
long e;
short f;

std::cout << "Size of char " <<  sizeof(a) << " bytes " << std::endl;
std::cout << "Size of char " <<  sizeof(b) << " bytes " << std::endl;
std::cout << "Size of char " <<  sizeof(c) << " bytes " << std::endl;
std::cout << "Size of char " <<  sizeof(d) << " bytes " << std::endl;
std::cout << "Size of char " <<  sizeof(e) << " bytes " << std::endl;
std::cout << "Size of char " <<  sizeof(f) << " bytes " << std::endl;

int total = sizeof(a) + sizeof(b) + sizeof(c) + sizeof(d) + sizeof(e) + sizeof(f);
std::cout << "Total memory used " << total << " bytes" << std::endl;

return 0;
}


