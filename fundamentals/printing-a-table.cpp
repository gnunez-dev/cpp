#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  cout << left << setw(10) << "Fruits" << right << setw(10) << "Total" << endl
       << left << setw(10) << "Apple" << right << setw(10) << "100" << endl
       << left << setw(10) << "Bananas" << right << setw(10) << "50";

  return 0;
}