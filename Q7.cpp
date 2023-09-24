//Binary to Grey Code Converter

#include <iostream>
#include <bitset>
using namespace std;

int main()
{

unsigned short i; //Input i

cout << "Enter a 16 bit integer" << endl;
cin >> i;

unsigned short grey = i^(i>>1);


cout << "The grey code is: " << bitset <16> (grey) << endl;


return 0;
}
