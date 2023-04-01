#include <iostream>
using namespace std;

void decimalToHexadecimal(int decimal){
  string hexaDecimalNumber = "";
  while (decimal != 0){
    int remainder = decimal % 16;
    decimal /= 16;
    if (remainder < 10)
      hexaDecimalNumber = char(48 + remainder) + hexaDecimalNumber;
    else
      hexaDecimalNumber = char(55 + remainder) + hexaDecimalNumber;
  } 
      cout << hexaDecimalNumber;
}
int main(){
  int decimal;
  cout << "Enter a decimal number: ";
  cin >> decimal;
  decimalToHexadecimal(decimal);
  return 0;
}