#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main () {
  cout << left << "Data types size and limits" << endl;
  cout << setw(20) << "Data Type" << setw(20) << "Min" << setw(20) << "Max" << endl
       << setw(20) << "short" << setw(20) <<numeric_limits<short>::min() << setw(20) << numeric_limits<short>::max() << endl
       << setw(20) << "int" << setw(20) <<numeric_limits<int>::min() << setw(20) << numeric_limits<int>::max() << endl
       << setw(20) << "double" << setw(20) <<numeric_limits<double>::min() << setw(20) << numeric_limits<double>::max() << endl
       << setw(20) << "float" << setw(20) <<numeric_limits<float>::min() << setw(20) << numeric_limits<float>::max() << endl
       << setw(20) << "long" << setw(20) <<numeric_limits<long>::min() << setw(20) << numeric_limits<long>::max();
}