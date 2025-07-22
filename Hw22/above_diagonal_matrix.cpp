#include <iostream>
#include <climits>  


int main() {
  int N, M;
    std::cout << "Enter number of rows (N): ";
    std::cin >> N;
    std::cout << "Enter number of columns (M): ";
    std::cin >> M;

  int matrix[100][100];

 std::cout << "Enter matrix elements:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
         std::cin >> matrix[i][j];
        }
    }

    int maxAboveDiagonal = INT_MIN;  

    for (int i = 0; i < N; ++i) {
      for (int j = i + 1; j < M; ++j) { 
        if (matrix[i][j] > maxAboveDiagonal) {
             maxAboveDiagonal = matrix[i][j];
            }
        }
    }

   std::cout << "Maximum element above main diagonal: " << maxAboveDiagonal << std::endl;

    return 0;
}

