#include<iostream>
using namespace std;

int add(int a , int b)
	{
		return a+b;
	
	}

int main()
{
	int &f(int , int )=add;
	cout<< (*f)(5,2);
}

