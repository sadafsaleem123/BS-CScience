#include<iostream>
#include<conio.h> 
using namespace std;
int main()
{  
int a,b;
a=5;
b=6;
cout<<" before swapping x: "<<a<<"   y:"<<b;
a=a+b;   //5+6 = 11
b=a-b;	//11-6 = 5
a=a-b;	//11-5 = 6
cout<<" after swapping x:  "<<a<<"   y:"<<b;

}          
