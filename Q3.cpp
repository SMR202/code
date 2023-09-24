//Credit Card Loan

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double N, i;
    int b, p;
    const int c=30;

    cout << "Enter Balance: " << endl;
    cin >> b;

    cout << "Enter monthly payment: " << endl;
    cin >> p;

    cout << "What is the yearly interest rate?" << endl; 
    cin >> i;

    i=i/365.0;

    N = ((-1.0)/c)*((log(1.0+(b/p)*(1.0-pow(1.0+i,c))))/(log(1.0+i))); //Formula


    cout << "The time it will take to pay off this credit card loan is " << N << endl;







return 0;
}

