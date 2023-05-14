#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,sum=0;
	float avg;
	for(i=0;i<=5;i++)
{
	cout<<i<<endl;
	sum+=i;
}
	cout<<"sum= "<<sum<<endl;
	avg=sum/5;
	cout<<"avg= "<<avg<<endl;
}
