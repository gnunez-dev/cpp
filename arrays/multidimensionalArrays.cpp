#include <iostream>

using namespace std;

const int rows = 2;
const int columns = 3;

void printMatrix (int matrix[rows][columns]){
  for(int row = 0; row < rows; row++){
    cout << "row " << row << ": ";
    for(int col = 0; col < columns; col++){
      cout << matrix[row][col] << " ";
    }
    cout << endl;
  }
}

int main(){

  int matrix[rows][columns] = {{2, 5, 7}, {8, 3, 6}};
  printMatrix(matrix);

  return 0;
}