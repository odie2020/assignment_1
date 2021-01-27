#include <iostream>
using namespace std;

int main()
{
  //Declaring the variables that we will be using
  double regularHours = 40.0;
  int hours;
  double socialSecurityTax, federalIncomeTax, stateIncomeTax, medicalInsurance;
  double grossPay, withholdingAmount, takeHomePay;

  //Prompts the user for an input
  cout << "Please enter the number of hours worked in a week: " << endl;
  cin >> hours;

  //Sees if the hours that are worked is more than 40, which is a regular work week
  if(hours > regularHours){
    //if it is then we add in the extra hours as overtime
    grossPay = 16 * regularHours + (1.5) * (16) * (hours - regularHours);
  }
  //if not, then we just pay them for however many hours they worked
  else{
    grossPay = 16 * hours;
  }
  //We take however much money the made, the multiply it by the tax percentages
  socialSecurityTax = grossPay * .06;
  federalIncomeTax = grossPay * .14;
  stateIncomeTax = grossPay * .05;
  medicalInsurance = 10;

  //Take all the tax money out along with the money paid to medical insurance
  withholdingAmount = socialSecurityTax + federalIncomeTax + stateIncomeTax + medicalInsurance;
  //The final amount we get is however much we make minus the money that is being withheld
  takeHomePay = grossPay - withholdingAmount;

  //Prints all of the amounts that we calculated
  cout << "Gross pay: " << grossPay << endl;
  cout << "Money withheld from the Social Security Tax: " << socialSecurityTax << endl;
  cout << "Money withheld from Federal Income Tax: " << federalIncomeTax << endl;
  cout << "Money withheld from the State Income Tax: " << stateIncomeTax << endl;
  cout << "Take home pay: " << takeHomePay << endl;

return 0;
}
