#include <iostream>

using namespace std;

int main() {
  cout << "Enter the total of the sales: " << endl;
  int sales;
  cin >> sales;

  const float commission10 = .1f;
  const float commission15 = .15f;
  const float commission20 = .2f;

  double commissionOfSale;
  short percentagesCommission;

  if(sales <= 10000) {
    commissionOfSale = sales * commission10;
    percentagesCommission = 10;
  } else if( sales <= 15000) {
    commissionOfSale = sales * commission15;
    percentagesCommission = 15;
  } else {
    commissionOfSale = sales * commission20;
    percentagesCommission = 20;
  }
  cout << "Percentages of commission: " << percentagesCommission << "%" << endl
       << "Total commission of the sales: $" << commissionOfSale;

  return 0;
}