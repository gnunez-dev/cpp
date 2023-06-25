/* 
  Code this requirement: 
  A job applicant should be a US citizen and either have a Bachelor degree or at least two years of work experience.
 */

#include <iostream>

using namespace std;

int main() {
  bool isUsCitizen = false;
  bool hasBachelorDegree = true;
  int yearOfExperience = 10;
  const int leastYearsOfExperience = 2;

  bool isEligible = isUsCitizen && (hasBachelorDegree || yearOfExperience >= leastYearsOfExperience);

  cout << "Result: " << boolalpha << isEligible << endl;

  return 0;
}