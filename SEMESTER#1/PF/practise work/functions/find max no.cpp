/*
FUNCTIONS IN PROGRAM
*/
#include<iostream>
using namespace std;
int maximum(int a,int b);
int main()
{
	int a,b;
	cout<<"enter two no to find maximum: ";
	cin>>a>>b;
	int c = maximum(a,b);
	cout<<"max value is: "<<c;
	return 0;
}
int maximum(int x,int y)
{
	if (x>y)
	return x;
	else 
	return y;
}

