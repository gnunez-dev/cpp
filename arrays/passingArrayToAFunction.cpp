#include <iostream>

using namespace std;

//the size is needed to use it in the for loop
void printNumbers(int numbers[], int size){
  for(int i = 0; i < size; i++){
    cout << numbers[i] << " ";
  }
}

int main(){
  int arrayNumbers[] = {10, 20, 30};
  printNumbers(arrayNumbers, size(arrayNumbers));

  return 0;
}