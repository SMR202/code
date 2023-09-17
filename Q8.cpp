
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float l;
	cout << "Enter Gallons of Water used" << endl;
	cin >> l;

	float bill = 0;
	bill += (l<=100)*l*0.45;
	bill += (l>100)*100*0.45;
	bill += (l>100 && l<=350)*(l-100)*0.85;
	bill += (l>350)*250*0.85;
	bill += (l>=350 && l<=600)*(l-350)* 1.45;
	bill += (l>600)*250*1.45;
	bill += (l>600)*(l-600)*2.6;

	bill = bill*1.14;

	cout << fixed << setprecision(2) << "The Water Bill is: " << bill << endl;




return 0;
}
