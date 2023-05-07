#include<iostream>
#include<conio.h>
using namespace std;
int ispositive(int a);       //declaration
int main()
{
	int a;
	cout<<"Enter a no to find its nature= ";
	cin>>a;
	ispositive(a);          //call
}
int ispositive(int x)           //definition
{
	if(x>=0)
	cout<<"no is positive";
	else
	cout<<"no is negative";
}
