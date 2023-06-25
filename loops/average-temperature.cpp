#include <iostream>

using namespace std;

int  main(){
  int temperatures[] = { 60, 80, 90 };
  double sum = 0;

  for(int temperature: temperatures)
    sum += temperature;
    
  short count = sizeof(temperatures) / sizeof(int);
  double averange = sum / count;

  cout << "The averange is: " << averange << endl;
  return 0;
}