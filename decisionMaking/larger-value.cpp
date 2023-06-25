#include <iostream>

using namespace std;

int main() {
  cout << "Enter two values:" << endl;
  
  int first;
  cout << "First: ";
  cin >> first;

  int second;
  cout << "Second: ";
  cin >> second;

  const int result = (first > second) ? first : second;
  cout << "Larger value: " << result << endl;

  return 0;
}