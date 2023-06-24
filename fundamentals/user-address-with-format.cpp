#include <iostream>

using namespace std;

int main() {
  string name;
  cout << "Hi, please answer the following questions:" << endl
       << "**Name: ";
  getline(cin, name);

  string street;
  cout << "Enter your address" << endl
       << "*Street: ";
  getline(cin, street);

  string city;
  cout << "*City: ";
  getline(cin, city);

  string state;
  cout << "*State: ";
  getline(cin, state);

  string zipCode;
  cout << "*Zip code: ";
  getline(cin, zipCode);

  cout << endl << endl << "======================================" << endl
       << name << ", your address is: " << endl
       << street << endl
       << city << ", " << state << ", " << zipCode
       << endl << "======================================" << endl << endl;

  return 0;
}