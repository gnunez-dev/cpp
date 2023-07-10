#include <iostream>
using namespace std;

void swap(int* first, int* second){
  int temp = *first;
  *first = *second;
  *second = temp;
}

int main() {

  int first = 20;
  int second = 55;

  swap(&first, &second);
  
  cout << first << " " << second;

  return 0;
}