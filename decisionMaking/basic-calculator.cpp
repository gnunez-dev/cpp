#include <iostream>

using namespace std;

int main() {
  cout << "Enter two values and an operator:" << endl;
  
  double first;
  double second;
  cin >> first >> second;

  char op;
  cout << "Operator: ";
  cin >> op;

  double result;

  switch (op) {
    case '+':
      result = first + second;
      break;
    
    case '-':
      result = first - second;
      break;

    case '*':
      result = first * second;
      break;

    case '/':
      result = first / second;
      break;

    default:
      result = 0;
      cout << "Invalid operator";
  }
  cout << "--------------" << endl << "Result: " << result << endl << "--------------" << endl;
  return 0;
}