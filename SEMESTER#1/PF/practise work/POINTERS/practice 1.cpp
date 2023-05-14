
//Write a program to reverse the digits a number using pointers.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int a, n, *rem, *rev;
	int *p;
	cout<<"enter any number ";
	cin>>a;
	p = &a;
	while(a!=0)
	
	{
	*rem = a%10;
	*rev= (*rev)*10 + *rem;
	a = a/10;
	}

	cout<< " reverse is ="<< *rev;
}
