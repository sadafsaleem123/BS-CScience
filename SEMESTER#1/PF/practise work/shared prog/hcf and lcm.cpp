#include<iostream>

using namespace std;
int main()
{
int n1, n2,HCF,LCM;
cout << "Enter two numbers: ";
cin >> n1 >> n2;
 while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    HCF=n1;
    cout << "HCF = "<<HCF;
	LCM=(n1*n2)/HCF;	
    cout<<"LCM = "<<LCM;
	
return 0;	
}
