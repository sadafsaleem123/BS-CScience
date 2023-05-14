#include<iostream>
#include<conio.h>
using namespace std;
int fact(int);       //declaration
int main()
{
	int num,fact=1;;
	cout<<"enter no ";
	cin>>num;
	fact(num);              //call
}
int fact(num);           //definition
{
	for(int i=1;i<=num;i++){
	fact*=i;
}
	cout<<fact<<endl;
}
