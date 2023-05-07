#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int);							//decl
int main()
{
	int num;
cout<<"enter any integer: ";
	cin>>num;
	int c;
	c=factorial(num);
    cout<<"fact="<<c;
}
int factorial(int num)
{
	int i;
	long fact;
	fact=21;
	for(i=1;i<=num;i++)
	fact*=i;
	return fact;
}
