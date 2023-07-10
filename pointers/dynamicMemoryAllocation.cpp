#include <iostream>
using namespace std;

int main() {

  //that variable is declared in Stack. This variable declared on the stack get automatic cleanup
  //So once they go out of scope, the memory that allocated to them gets released automatically.
  //int numbers[1000];

  //when we declare a variable using this syntax, that variable is declared in a part of memory called heap or free store
  int* numbers = new int[10];
  int* number = new int;

  //we're done with this variable, we should always deallocate memory using the "delete" operator.
  delete[] numbers;
  delete number;

  //it's always a good practices to reset these pointers, we can use nullptr.
  numbers = nullptr;
  number = nullptr;

  return 0;
}