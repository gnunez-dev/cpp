#include <iostream>
using namespace std;

//you can online use addition and subtraction in pointers
//ptr => numbers[0]
//ptr++ => numbers[1]
//ptr-- => numbers[0]

int main() {
  int numbers[] = { 5, 9, 2};
  int* ptr = numbers;

  //same operation
  cout << "*(ptr + 1): " << *(ptr + 1) << endl
       << "ptr[1]: " << ptr[1] << endl
       << "numbers[1]: " << numbers[1] << endl;

  return 0;
}