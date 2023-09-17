#include <iostream>
using namespace std;

int main()
{

	cout << ("Enter 3 positive integers on your mind") << endl;
	
	int num1,num2,num3;
	
	cout << ("Enter the first number") << endl;
	cin >> num1;

	cout << ("Enter the second number") << endl;
	cin >> num2;
	
	cout << ("Enter the third number") << endl;
	cin >> num3;
	
	int last1, last2, last3;

// Taking out last digit	
	last1=num1%10;
	last2=num2%10;
	last3=num3%10;

// Checking for same last digits
	bool l1eql2 = (last1==last2);
	bool l2eql3 = (last2==last3);
	bool l3eql1 = (last3==last1);

	bool result = (l1eql2 | l2eql3 | l3eql1 );

	cout << "The Result is:  " << boolalpha << result << endl;



return 0;
}

