 //program determines whether a month times the day is equal to the year

#include <iostream>
using namespace std;

int main()
{

	
	int d, m, y;
	
	cout << ("Enter the date") << endl;
	cin >> d;

	cout << ("Enter the numeric form of the month") << endl;
	cin >> m;
	
	cout << ("Enter the last 2 digits of the year") << endl;
	cin >> y;
	
	int product = d*m;
	
	bool number = (product==y);
	
	cout << (number ? "The Date is MAGIC!" : "The date is NOT Magic") << endl;


return 0;
}

