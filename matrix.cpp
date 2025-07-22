#include <iostream>

int main () {

int N, M;
 std::cout << "Enter number of rows (N) ";
 std::cin >> N;
 std::cout << "Enter number of columns (M) ";
 std::cin >> M;


int matrix[N][M];
 
 	std::cout << "Enter matrix elements: \n ";
  	for (int i = 0; i < N; ++i) {
	for(int j = 0; j < M; ++i) {
	std::cin >> matrix[i][j];
    
	}
  }

    int evenCount = 0;
    for (int i = 0; i < N; ++i) {
     for (int j = 0; j < M; ++i) {
       if (matrix[i][j] % 2 == 0) {
             evenCount++;
              
     } 
   }

}  


std::cout << "Number of even elements in the matrix: " << evenCount << std::endl;
    return 0;
}
