#include <iostream>
using namespace std;

int main() {
  
  int* x = new int;
  delete x;
  delete x; //this will cause the program to crash

  return 0;
}

/* 
  Smart pointers:
  - Unique pointers
  - Shared pointers
 */