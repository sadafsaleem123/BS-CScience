#include<iostream>
#include<conio.h>
using namespace std;
int nature(int,int);   //prototype
int main()
{
int a,b,x,y;
cout<<"enter a no to find its nature: ";
cin>>a;
nature(x,y);         //call

	
}
int nature(int a,int b)
{
if(a>=0)
cout<<"no is positive ";
else 
cout<<"no is negative ";
}

