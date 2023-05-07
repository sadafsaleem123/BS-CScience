#include<iostream>
using namespace std;

int sub(int a , int b)
	{
		return a-b;
	
	}

int main()
{
	int (&f)(int , int )=sub;
	cout<< f(5,2);
}

