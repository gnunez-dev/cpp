#include <iostream>

using namespace std;

int main(){
  cout << numeric_limits<size_t>::min() << endl;
  cout << numeric_limits<size_t>::max() << endl;
  
  return 0;
}

//size_t is a data type, can store large values. It's used for representing the size of objects. It large enough to contain the size of the largest object the system can handle.