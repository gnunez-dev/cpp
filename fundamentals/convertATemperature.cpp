/* 
Por ejemplo, si se quiere saber cuántos grados centígrados son 100 grados farenheit, lo que hay que hacer seguir la fórmula que aparece en el paso anterior. Es decir, 100-32= 68 A ese resultado y de acuerdo con la fórmula, hay que multiplicarlo por 5. Es decir, 68*5= 340 Y el número resultante (340) se divide entre 9. 340/9= 37,7ºC son 100ºF. */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout << "Converting temperature from fahrenheit to celsius" << endl << "Enter a temperature in fahrenheit: ";
  double temperatureFahrenheit;
  cin >> temperatureFahrenheit;

  double temperatureCelsius = floor((( temperatureFahrenheit - 32) * 5) / 9);
  cout << temperatureFahrenheit << "°F are " << temperatureCelsius << "°C" << endl;

  return 0;
}