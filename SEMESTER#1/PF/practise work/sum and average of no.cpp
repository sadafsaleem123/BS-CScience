#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,n2,hcf;
	cout<<"enter 1st no ";
	cin>>n1;
	cout<<"enter 2nd no ";
	cin>>n2;
	for(;n1!=n2; )
	{
		if (n1>n2)
		n1-=n2;
		else
		n2-=n1;
	}
	cout<<"HCF "<<n1;
}
