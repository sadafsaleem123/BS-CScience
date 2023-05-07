#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
char ch;
cout<<"enter a number: ";
cin>>ch;
if(ch=='a'||ch=='A'||ch=='e'||ch=='i'||ch=='I'||ch=='E'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
cout<<"number is vowel";
else
cout<<"number is consonant";
}
