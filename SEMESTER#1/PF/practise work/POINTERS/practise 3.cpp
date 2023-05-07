#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n, rev=0, rem;
	cout<<"Enter a number =";
	cin>>n;
	while(n!= 0)
	{
	
		rem = n%10;
		rev = rev*10+rem;
	
	}
	
	cout<<"Reverse = "<<rev;

}
