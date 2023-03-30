#include <iostream>
using namespace std;
void decimalToBinary(int decimal){
    int i = 0;
    int bin[100];
    while(decimal != 0){
    int remainder = decimal % 2;
    decimal = decimal / 2;
    bin[i] = remainder;
    i++;
    }

    for(int j=i-1; j>=0; j--){
        cout << bin[j];
    }
}
int main(){
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    decimalToBinary(decimal);
}