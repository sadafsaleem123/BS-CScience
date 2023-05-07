#include<iostream>
#include<conio.h>
using namespace std;
int HCF(int,int);                   //prototype
int main()
{
	int a,b,c;
    cout<<"enter any integer: ";
	cin>>a>>b;
	c=HCF(a,b);                     //call
    cout<<" HCF= "<<c;
}
int HCF(int n,int d)                 //definition
{
	int rem;
	do
	{
		rem=n%d;
		n=d;
		d=rem;
	}
	while(rem!=0);
	return n;
}
