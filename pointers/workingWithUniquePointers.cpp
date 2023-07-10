#include <iostream>
#include <memory>

using namespace std;

//we cannot perform any arihmatic operations in unique pointers
//with this way to create pointers, we don't need to delete the memory, the function cleanup for us
int main() {
  auto numbers = make_unique<int[]>(10);
  auto y = make_unique<int>();

  numbers[0] = 10;
  cout << numbers[0];

  return 0;
}