#include<iostream>
using namespace std;


int doubleDigitValue (int digit) {
  int doubleDigit = digit * 2;
  int sum;

  if (doubleDigit >= 10) sum = 1 + doubleDigit % 10;
  else sum = doubleDigit;

  return sum;
}

int main()
{
  int digit;
  cout << "Enter a single digit number, 0-9: ";
  digit = cin.get();
  int sum = doubleDigitValue(digit - '0');
  cout << "Is the sum of digits " << sum << "? \n";
}
