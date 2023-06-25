#include <iostream>
#include <vector>

using namespace std;

int main() {
  //0 1 1 2 3 5 8 13
  int n;
  cout << "Enter a number: ";
  cin >> n;

  vector<int> fibonacci = {0, 1};

  for(int i = 2; i <= n; i++){
    int newFibonacci = fibonacci[i-2] + fibonacci[i-1];
    fibonacci.push_back(newFibonacci);
  }

  cout << "Fibonacci sequence until " << n << ": " << endl << "[ ";
  for(int num: fibonacci){
    cout << num << " ";
  }
  cout << "]";
  
  return 0;
}