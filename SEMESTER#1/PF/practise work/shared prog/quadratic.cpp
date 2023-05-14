#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,d,e,f;
cout<<"Enter value of a b and c"<<endl;
cin>>a>>b>>c;
d=sqrt(b*b-4*a*c);
e=(-b+d)/(2*a);
f=(-b-d)/2*a;
if(d>0) cout<<"The roots are:"<<endl<<e<<endl<<f; 
else cout<<"The roots are imaginary\n";	
getch();	
}
