#include<iostream>
#include<conio.h>
using namespace std;
int isprime(int a);       //declaration
int main()
{
	int a;
	cout<<"Enter a no to find its nature= ";
	cin>>a;
	isprime(a);          //call
}
int isprime(int x)           //definition
{
	for(int i=2;i<x;i++)
{
	if(x%2==0)
	cout<<"not prime";
	break;
{	cout<<"no is prime";}
}
}
