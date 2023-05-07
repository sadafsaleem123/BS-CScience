#include<iostream>
#include<conio.h>
using namespace std;
bool ispositive(int x);             //declaration
int main()
{
	int a,b;
	cout<"enter a no";cin>>a;
	ispositive(a);                     //call

}
bool ispositive(int x)                 //definition
{
	if(x>0)
	return true;
	else
	return false;
}
