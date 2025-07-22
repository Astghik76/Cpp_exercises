#include <iostream>
#include <string>

int main () {

  int k;
  std::string s;

	std::cout << "Enter a string "; 
       getline(std::cin, s);

  std::cout << "Enter shift k ";
  std::cin >> k;

  std::string encoded = "";

	for (char c : s) {
	if (c >= 'a' && c <= 'z') {
         encoded += (c - 'a' + k) % 26 + 'a';
   } else if (c >= 'A' && c <= 'Z') {
       encoded += (c - 'A' + k) % 26 + 'A';
     } else {
      	encoded += c; 
 } 
 		}

  std::cout << "Encoded string: " << encoded << std::endl;
  
 	return 0; 


}
