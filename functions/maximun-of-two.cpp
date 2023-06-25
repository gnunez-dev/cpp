#include <iostream>

using namespace std;

int maximunOfTwo(int first, int second) {
  return (first > second) ? first : second;
}

int main() {
  int first;
  int second;

  cout << "Enter two values: ";
  cin >> first >> second;

  int maxValue = maximunOfTwo(first, second);
  cout << "The maximun value is: " << maxValue << endl;

  return 0;
}