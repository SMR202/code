//Max and Second max number with a lot of restrictions by the professor 

#include <iostream>
using namespace std;

int main()
{

    int num1,num2,num3,num4;
	
	cout << ("Enter the first number") << endl;
	cin >> num1;

	cout << ("Enter the second number") << endl;
	cin >> num2;
	
	cout << ("Enter the third number") << endl;
	cin >> num3;

    cout << ("Enter the fourth number") << endl;
	cin >> num4;

    int max;
    
    max = (num1 > num2) ? num1 : num2;
    max = (max > num3) ? max : num3;
    max = (max > num4) ? max : num4;

    int smax;

    smax = (num1 != max) ? num1 : ((num2 != max) ? num2 : ((num3 != max) ? num3 : num4));
    smax = (smax < num1 && num1 != max) ? num1 : smax;
    smax = (smax < num2 && num2 != max) ? num2 : smax;
    smax = (smax < num3 && num3 != max) ? num3 : smax;
    smax = (smax < num4 && num4 != max) ? num4 : smax;

    cout << "Maximum Value is: " << max << endl;
    cout << "Second Greatest Value is: " << smax << endl;




return 0;
}
