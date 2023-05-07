#include<iostream>
#include<conio.h>
using namespace std;
bool isprime(int);                   //prototype
int main()
{
	int n;
	cout<<"enter a no: ";
	cin>>n;
	if(isprime(n))               //call
	    cout<<"not prime";
	else
	cout<<"prime";
}
bool isprime(int n)                     //definition
{
	int v=1;
	for(int i=2;i<n;i++)
	return false;
    if (v==1)
	return true;
}
