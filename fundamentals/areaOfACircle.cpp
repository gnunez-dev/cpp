#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const double pi = 3.14;

  cout << "Area of a Circle" << endl << "Enter a radius:" << endl;
  double radius;
  cin >> radius;

  double area = pi * pow(radius, 2);
  cout << "Area of the circle: " << area << endl;

  return 0;
}