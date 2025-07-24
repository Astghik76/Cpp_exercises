#include <iostream>
#include <cstdlib>
#include <ctime>

 const int ROWS = 3;
 const int COLS = 4;

   void Array(int* matrix) {
   for (int i = 0; i < ROWS * COLS; ++i) {
    matrix[i] = rand() % 100;
       }
  } 

 void Matrix(int* matrix) {
  for (int i = 0; i < ROWS; ++i) {
    for (int n = 0; n < COLS; ++n) {
     std::cout << matrix[i * COLS + n] << "\t";
 
    } 
     std::cout << "\n";
   } 
 
   }
 
int main () {

srand(time(0));
 
 int* matrix = new int[ROWS * COLS];

  Array(matrix);
  Matrix(matrix);
   
  delete[] matrix;

  return 0;

}
