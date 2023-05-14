#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int bd,bm,by,cd,cm,cy;
cout<<"ENTER D.O.B. (DD/MM/YYYY) \n";
cin>>bd>>bm>>by;
cout<<"Enter current date (DD/MM/YYYY)\n";
cin>>cd>>cm>>cy;
cout<<"Your age is:\n";
if (cd<bd) {
cd=cd+30; cm=cm-1;
cout<<cd-bd<<" Days ";} else cout<<cd-bd<<" Days ";
if (cm<bm) {
cm=cm+12; cy=cy-1;
cout<<cm-bm<<" Months ";} else cout<<cm-bm<<" Months ";
cout<<cy-by<<" Years ";

	
	
	

	
	
	
	
	
	
	
	
	
	
	
getch();	
}
