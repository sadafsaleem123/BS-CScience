#include<iostream>
using namespace std;
int myfun(int a)
{
	if(a==1)
	return 0;
	myfun(a/2);
	cout<<a%2;
}
int main()
{
	int num;
	cin>>num;
	myfun(num);
} 
