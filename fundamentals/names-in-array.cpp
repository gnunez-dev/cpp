#include <iostream>

using namespace std;

int main() {

  string names[3];

  cout << "Enter three names: " << endl
       << "1- Name: ";
  getline(cin, names[0]);

  cout << "2- Name: ";
  getline(cin, names[1]);

  cout << "3- Name: ";
  getline(cin, names[2]);

  cout << endl << endl << "The first name entered was: " << names[0] << endl << endl;

  return 0;
}