#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    unsigned int k;
    
    cout << "Input a positive integer of 32 bits" << endl;
    cin >> k;

    bitset <32> gates (k);

    unsigned int constant;
    unsigned int g1; 
    unsigned int g2;
    unsigned int g3;
    
    constant=k>>24;
    g1=k<<24;
    g1=g1>>24;
    g2=k<<16;
    g2=g2>>24;
    g3=k<<8;
    g3=g3>>24;


    unsigned int key= g1^g2^g3^constant;


    cout<<"Quantum key is: " <<  bitset <8> (key) <<endl;



return 0;
}
