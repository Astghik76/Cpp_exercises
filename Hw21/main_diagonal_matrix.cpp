#include <iostream>

int main() {
    int N, M;
   std::cout << "Enter number of rows (N): ";
    std::cin >> N;
    std::cout << "Enter number of columns (M): ";
   std::cin >> M;

  int matrix[100][100];

    std::cout << "Enter the matrix elements:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
         std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
      int rowSum = 0;
      for (int j = 0; j < M; j++) {
        rowSum += matrix[i][j];
        }

     if (i < M) {
       matrix[i][i] = rowSum;
          }
    }

  std::cout << "Modified matrix:\n";
   for (int i = 0; i < N; i++) {
       for (int j = 0; j < M; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

