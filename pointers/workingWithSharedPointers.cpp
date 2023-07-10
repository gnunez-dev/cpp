#include <iostream>
#include <memory>

using namespace std;

int main() {
  
  //shared_ptr<int> x(new int);
  auto x = make_shared<int>();
  *x = 10;

  shared_ptr<int> y(x);
  if(x == y)
    cout << "Equal" << endl;
  
  cout << "x: " << *x << " y:" << *y << endl;

  return 0;
}