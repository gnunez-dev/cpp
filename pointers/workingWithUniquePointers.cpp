#include <iostream>
#include <memory>

using namespace std;

//we cannot perform any arihmatic operations in unique pointers
int main() {
  auto numbers = make_unique<int[]>(10);
  auto y = make_unique<int>();

  numbers[0] = 10;
  cout << numbers[0];

  return 0;
}