#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float N, i;
    int b, p;
    const int c=30;

    cout << "Enter Balance: " << endl;
    cin >> b;

    cout << "Enter monthly payment: " << endl;
    cin >> p;

    cout << "What is the yearly interest rate?" << endl; 
    cin >> i;

    i=i/365;

    N = (-1/c)*(log(1+(b/p)*(1-pow(1+i,c))))/(log(1+i)); //Formula


    cout << "The time it will take to pay off this credit card loan is " << N << endl;







return 0;
}

