#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	int i ,n;
//	char s[10];
	char s1[15],s2[15];
	char *s11, *s22;
	
	cout<<"entr two string =";
	cin>>s1>>s2;
	
	i= strlen(s1);
	cout<<"strlen is ="<<i <<endl;

//	for(i=0;i<)
	strcat(s1 , s2);
	cout<<"strcat is ="<<s1 <<endl;
	
	strcpy(s1, s2);
	cout<<"strcpy is ="<<s1<< endl;
	
	n =strcmp(s11, s22);
	if(n==0)
	cout<<"equal" <<endl;
	else
	cout<<"not equal";
}
