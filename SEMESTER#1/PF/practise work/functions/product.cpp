#include<iostream>
using namespace std; 
void multiply(int,int); 										//declaration
int main()
{
	int x,y;
  cout<<"enter number of ur choice=";cin>>x;
  cout<<"enter number of ur choice=";cin>>y;
	multiply(x,y);													//call
}
void multiply(int a,int b)										//definition
{
	int c;
	c=a*b;
	cout<<"multiplication="<<c<<endl;
}
