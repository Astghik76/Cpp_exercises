#include <iostream>

int main() {
    int N, M;
    std::cout << "Enter number of rows and columns" ;
    std::cin >> N >> M;

    double matrix[N][M];

    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < M; ++j) {
        std::cin >> matrix[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < N; ++i) {
    for (int j = 0; j <= i && j < M; ++j) {
      double val = matrix[i][j];
       if (val >= 12.3 && val < 34.1) {
            count++;
            }
        }
    }

    
    std::cout << "Number of elements in [12.3; 34.1): " << count << std::endl;

    return 0;
}

