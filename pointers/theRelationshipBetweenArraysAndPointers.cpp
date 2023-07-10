#include <iostream>
using namespace std;

//the arrays are pass as references...
void printArray(int numbers[]){
  numbers[0] = 56;
}

int main() {
  int numbers[] = {2, 5, 9};
  printArray(numbers);
  cout << numbers[0];

  return 0;
}