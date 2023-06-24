#include <iostream>

using namespace std;

int main() {
  bool isNewUser {false};
  cout << boolalpha << "boolalpha: " << isNewUser << endl
       << noboolalpha << "noboolalpha: " << isNewUser;
}