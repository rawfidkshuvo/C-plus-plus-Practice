#include<iostream>
#include<stdlib.h>
using namespace std;

void randomNumber(int times)
{
    int i;
    int number;

    cout << "Generating " << times << " Random Numbers -> ";

    for(i=1; i<=times; i++)
    {
        number = rand()%100; //get random number from 0 to 100
        cout << " " << number << " ";
    }
    cout << "\n";
}

int main()
{
    int times;
    cout << "How many random numbers?: ";
    cin >> times;
    randomNumber(times);
    return 0;
}