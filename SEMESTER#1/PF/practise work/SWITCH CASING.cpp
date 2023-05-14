#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,a,b,c,d;
cout<<"Enter a number:  ";
cin>>n;	
switch(n)
{
case 1:
{
cout<<"one point one"<<endl;
cout<<"one point two"<<endl;
cout<<"one point three"<<endl;
cout<<"Enter a no: ";
cin>>a;
{
case 'a':
cout<<"one point one"<<endl;
cout<<"you are in one point one menu ";
break;
case 'b':
cout<<"two point one"<<endl;
cout<<"you are in two point one menu";
break;
case 'c':	
cout<<"three point one"<<endl;
cout<<"you are in three point one menu ";
break;
} 
break;
}
case 2:
{
cout<<"two point one"<<endl;
cout<<"two point two"<<endl;
cout<<"two point three"<<endl;
cout<<"Enter a no:  ";
cin>>b;
{
case 'd':
cout<<"two point one"<<endl;
cout<<"you are in two point one ";
break;
case 'e':
cout<<"two point two"<<endl;
cout<<"you are in two point two menu ";
break;
case 'f':	
cout<<"two point three"<<endl;
cout<<"you are in two point three menu ";
break;
} 
break;
}
case 3:
{
cout<<"three point one"<<endl;
cout<<"three point two"<<endl;
cout<<"three point three"<<endl;
cout<<"enter a no as given  ";
cin>>c;
{
case 'i':
cout<<"three point one"<<endl;
cout<<"you are in three point one menu ";
break;
case 'j':
cout<<"three point two"<<endl;
cout<<"you are in three point two menu ";
break;
case 'k':	
cout<<"three point three"<<endl;
cout<<"you are in three point three menu ";
break;
} break;
}
case 4:
{
cout<<"four point one"<<endl;
cout<<"four point two"<<endl;
cout<<"four point three"<<endl;
cout<<"Enter a no:  ";
cin>>d;
{
case 'l':
cout<<"four point one"<<endl;
cout<<"you are in four point one menu ";break;
case 'm':
cout<<"four point two"<<endl;
cout<<"you are in four point two ";break;
case 'n':	
cout<<"point point three"<<endl;
cout<<"you are in four point three ";
break;
} 
break;
}
}
}
