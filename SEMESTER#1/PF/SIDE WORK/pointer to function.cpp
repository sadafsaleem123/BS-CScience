#include<iostream>
#include<math.h>
using namespace std;

int add(int a , int b)
	{
		return a+b;
	
	}

/*int main()
{
	int (& f)(int , int )=sub;
	cout<< (*f)(5,2);
}

//			OR

*/
int main()
{
	int result;
	int (*ptr)(int , int) = add;
	result = ptr(10, 20);
	cout<<result;	
}

//		OR

/*
int main()
{
	int result;
	int (*ptr)(int , int) = &add;
	result = (*ptr)(10, 20);
	cout<<result;	
}
*/

