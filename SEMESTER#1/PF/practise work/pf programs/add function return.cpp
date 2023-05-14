#include<iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int main()
{
 int x,y,z;
 cout<<"enter number=";cin>>x;
 cout<<"enter number=";cin>>y;
 int c;
 c=add(x,y);
	cout<<"sum="<<c<<endl;
	cout<<"enter number=";cin>>z;
	int d;
	d=add(c,z);
	cout<<"sum"<<d<<endl;
}
