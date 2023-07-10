#include <iostream>
using namespace std;

int main() {
  int number = 10;

  //The address-of operator
  int* ptr = &number; //you can use "nullptr" in case you don't want to initialize the pointer
  
  //Indirection (de-referencing) operator
  *ptr = 20;
  
  cout << number;

  return 0;
}

/* 
  Pointers:
  A special variable that hold the address of another variable in memory.

  Reason for using pointers:
  - Efficiently passing large objects between functions.
  - Dynamic memory allocation.
  - Enabling polymorphism.
 */