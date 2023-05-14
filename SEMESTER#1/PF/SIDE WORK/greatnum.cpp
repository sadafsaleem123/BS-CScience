
//Write a function to calculate area and perimeter of a rectangle


#include<iostream>
using namespace std;
void funct(int i, int j);		//decl

int main()
{
	
	int a, b, result;
	cout<<"enter no =";
	cin>>a>>b;
	funct(a,b);					//call

	
}

void funct(int i, int j)
{
	
	cout<<"perimeter is ="<<2*(i+j) <<endl ;
	cout<<"area is ="<< i*j ;
}
