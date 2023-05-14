#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter 1st no = ";
	cin>>n1;
	cout<<"enter 2nd no = ";
	cin>>n2;

	for(;n1!=0&&n2!=0;)
	if(n1>n2)
	n1=n1%n2;
	else
	n2=n2%n1;
if(n1>0)
cout<<"HCF = "<<n1;
else
cout<<"HCF = "<<n2;
}
