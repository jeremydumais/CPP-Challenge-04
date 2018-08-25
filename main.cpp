#include <iostream>
#include <conio.h>
#include "include/prime.h"

using namespace std;

int GetInputNumber(string const &msg);

int main(int argc, char const *argv[])
{
    unsigned int number {0};
    cout << "Largest prime smaller than given number" << endl;
    number = GetInputNumber("Enter the number : ");

    //Calculation
    unsigned int largestPrimeSmaller = 0;
    for(unsigned int i=2;i<number;i++)
    {
        if (prime::isPrime(i))
            largestPrimeSmaller = i;
    }
    if (largestPrimeSmaller==0)
        cout << "There's no prime number smaller than " << number << endl;
    else
        cout << "Largest prime smaller than " << number << " is " << largestPrimeSmaller << endl;
    cout << "Press any key to continue... " << endl;
    getch();
    return 0;
}

int GetInputNumber(string const &msg)
{
    int retVal {0};
    cout << msg;
    
    while(!(cin >> retVal))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout << "Invalid number. Please try again : ";
    }
    return retVal;
}
