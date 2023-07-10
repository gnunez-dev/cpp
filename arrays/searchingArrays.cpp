#include <iostream>

using namespace std;

int linearSearch (int numToFind, int numbers[], size_t size){
  for(int i = 0; i < size; i++){
    if(numbers[i] == numToFind){
      return i;
    }
  }
  return -1;
}

int main(){

  int numbers[] = {2, 5, 9, 7};
  int numToFind = 55;
  
  int returnValue = linearSearch(numToFind, numbers, size(numbers));

  cout << "Return value: " << returnValue;

  return 0;
}