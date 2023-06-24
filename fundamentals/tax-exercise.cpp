#include <iostream>

using namespace std;

int main(){

  cout << "Enter a total sales:" << endl;
  double sales;
  cin >> sales;
  cout << "Total sales: $" << sales << endl;

  const double stateTaxRate = .04;
  double stateTax = sales * stateTaxRate;
  cout << "State Tax (4%): $" << stateTax << endl;

  const double countryTaxRate = .02;
  double countryTax = sales * countryTaxRate;
  cout << "Country Tax (2%): $" << countryTax << endl;

  double totalTax = stateTax + countryTax;
  cout << "Total Tax: $" << totalTax << endl;

  return 0;
}