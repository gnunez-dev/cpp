#include <iostream>

using namespace std;

int main () {
  cout << "Print the factorial of that number" << endl << "Enter a positive number: ";
  int num;
  cin >> num;

  if(num < 0){
    cout << "Error! Number is not positive.";
  } else {

    int factorial = 1;
    for(int i = 1; i <= num; i++)
      factorial *= i;
    
    cout << "The factorial of " << num << " is: " << factorial << endl;
  }
  
  return 0;
}
