#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	char ch;
	
	while(1)
	{
	cout<<"press any key =";
	ch=fgetc(stdin);
	
	if(ch=='\n')
	{
		break;
	}
	else
	{
	cout<<ch<<"is pressed "<<endl;	
	}	
	ch=getchar();
}
return 0;
}
