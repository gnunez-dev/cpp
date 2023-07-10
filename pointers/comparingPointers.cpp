#include <iostream>
using namespace std;

//in pointers you're essentially comparing addresses

int main() {
  int numbers[] = {10, 20, 30};
  int* ptr = &numbers[size(numbers) - 1];

  //comparing two pointers
  while(ptr >= numbers){
    cout << *ptr << " ";
    ptr--;
  }
 
  return 0;
}