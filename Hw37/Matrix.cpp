#include <iostream>
#include <vector>
#include <cstdlib>  
#include <ctime>    
#include <string>

int main(int argc, char* argv[]) {
int rows, cols;
   if (argc == 2) {
 try {
   rows = std::stoi(argv[1]);
    cols = rows;
   } catch (...) {
 std::cerr << "Error: Argument must be a positive integer.\n";
      return 2;
        }
   } else if (argc == 3) {
try {
  rows = std::stoi(argv[1]);
  cols = std::stoi(argv[2]);
    } catch (...) {
 std::cerr << "Error: Arguments must be positive integers.\n";
   return 3;
        }
    } else {
 std::cerr << "Usage: ./my_prog <rows> [cols]\n";
   return 1;
    }

  if (rows <= 0 || cols <= 0) {
 std::cerr << "Error: Matrix dimensions must be greater than zero.\n";
    return 4;
    }

 std::srand(std::time(0));
 std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
  for (int i = 0; i < rows; ++i)
  for (int j = 0; j < cols; ++j)
   matrix[i][j] = rand() % 100 + 1;

 for (const auto& row : matrix) { 
 for (int val : row)
  std::cout << val << '\t';
  std::cout << '\n';
    }

    return 0;
}

