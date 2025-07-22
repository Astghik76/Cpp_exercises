#include <iostream>
#include <cstring>
 
int main () {
  
   char word1[100];
   char word2[100];
  
    std::cout << "Enter fist word ";
    std::cin >> word1;


    std::cout << "Enter second word ";
    std::cin >> word2; 
						 

	char* ptr = word1 + std::strlen(word1);
	
	for (int i = 0; word2[i] != '\0'; i++) {
  	*ptr = word2[i];
		ptr++;
	}

 	*ptr = '\0';

	std::cout << "Concatenated " << word1 << std::endl;

  return 0;


}
