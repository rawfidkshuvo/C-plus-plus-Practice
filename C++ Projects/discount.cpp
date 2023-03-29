#include <iostream>
using namespace std;
float discountedPrice (float price, float discount){
        
        float sum =  price + (price * discount) / 100;
        return sum;
}
int main(){
        cout << discountedPrice(121,33);
}