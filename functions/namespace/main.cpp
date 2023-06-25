#include <iostream>
#include "greet.h"

using namespace std;

int main() {
  string name;
  cout << "Enter a name: ";
  cin >> name;

  messaging::greet(name);

  return 0;
}