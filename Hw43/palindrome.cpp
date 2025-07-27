#include <iostream>
#include <string>

bool isPalindrome(const std::string& str, int left, int right) {
    if (left >= right) return true;  // Base case: all characters checked
    if (str[left] != str[right]) return false;
       return isPalindrome(str, left + 1, right - 1);
}

int main() {
 std::string input;
 std::cout << "Enter a string: ";
 std::cin >> input;

if (isPalindrome(input, 0, input.length() - 1))
 std::cout << "Palindrome\n";
    else
 std::cout << "Not a palindrome\n";

  return 0;
}

