#include <iostream>
using namespace std;

int main()
{
    int n1,n2,g,r,o,gr,b;
    
    cout << "Enter a Number between 1 to 36 inclusive" << endl;
    cin >> n1;
    cout << "Enter another Number between 1 to 36 inclusive" << endl;
    cin >> n2;


    bool gsame = ((n1==1||n1==6||n1==7||n1==12||n1==17||n1==20||n1==28||n1==33) && (n2==1||n2==6||n2==7||n2==12||n2==17||n2==20||n2==28||n2==33));
    bool rsame = ((n1==2||n1==11||n1==13||n1==18||n1==19||n1==24||n1==29||n1==32) && (n2==2||n2==11||n2==13||n2==18||n2==19||n2==24||n2==29||n2==32));
    bool bsame = ((n1==3||n1==10||n1==14||n1==3||n1==25||n1==30||n1==31||n1==36) && (n2==3||n2==10||n2==14||n2==23||n2==25||n2==30||n2==31||n2==36));
    bool grsame = ((n1==5||n1==8||n1==16||n1==21||n1==27||n1==34) && (n2==5||n2==8||n2==16||n2==21||n2==27||n2==34));
    bool osame = ((n1==4||n1==9||n1==15||n1==22||n1==26||n1==35) && (n2==4||n2==9||n2==15||n2==22||n2==26||n2==35));
    
    
    bool same = (gsame || rsame || bsame || grsame || osame );

    cout << (same ? "The 2 squares have the same color" : "The 2 squares don't have the same color") << endl;





return 0;
}
