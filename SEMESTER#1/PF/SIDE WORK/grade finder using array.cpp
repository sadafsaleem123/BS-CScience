/* C++ Program - Calculate Grade of Student */
		
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int mark[5], i ,j;
	float sum=0,avg;
	cout<<"enter total no of subjects = ";
	cin>>j;
	cout<<"Enter marks obtained in "<< j <<" subjects(out of 100) :";
	for(i=0; i<j; i++)
	{
		cin>>mark[i];
		sum=sum+mark[i];

	}
		cout<<"sum is = " <<sum <<" / " << j*100 <<endl;
	avg=sum/5;
	cout<<"Your Grade is ";
	if(avg>80)
	{
		cout<<"A";
	}
	else if(avg>60 && avg<=80)
	{
		cout<<"B";
	}
	else if(avg>40 && avg<=60)
	{
		cout<<"C";
	}
	else
	{
		cout<<"D";
	}
	getch();
}
