#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
float a,b;
char choice;
cout<<"Enter any two numbers:\n ";
cin>>a>>b;
cout<<"What do you want to do? (+,-,/,*):\n ";
cin>>choice;
switch(choice){
case'+':
cout<<"The answer is :"<<a+b;
break;
case'-':
cout<<"The answer is :"<<a-b;
break;
case'*':
cout<<"The answer is :"<<a*b;
break;
case'/':
cout<<"The answer is :"<<a/b;
break;
default:
cout<<"invalid choice";	
	
	
	
	
}
	
	
	
	
	getch(); 

}
