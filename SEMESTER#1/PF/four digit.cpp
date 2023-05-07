#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int num,num1,num1i,num2,num3,num3i,num4;
while(1){

cout<<"Enter any 4 digit number : ";
cin>>num;
if (num>999 && num<=9999){
num4=num/1000;
switch(num4){
case 1 : cout<<"One Thousand ";
break;
case 2 : cout<<"Two Thousand ";
break;
case 3 : cout<<"Three Thousand ";
break;
case 4 : cout<<"Four Thousand ";
break;
case 5 : cout<<"Five Thousand ";
break;
case 6 : cout<<"Six Thousand ";
break;
case 7 : cout<<"Seven Thousand ";
break;
case 8 : cout<<"Eight Thousand ";
break;
case 9 : cout<<"Nine Thousand ";
break; 
}
num=num%1000;
}

if(num>99&&num<=999){

num3=num/100;
switch(num3){
case 1 : cout<<"One Hundred ";
break;
case 2 : cout<<"Two Hundred ";
break;	
case 3 : cout<<"Three Hundred ";
break;
case 4 : cout<<"Four Hundred ";
break;
case 5 : cout<<"Five Hundred ";
break;
case 6 : cout<<"Six Hundred ";
break;
case 7 : cout<<"Seven Hundred ";
break;
case 8 : cout<<"Eight Hundred ";
break;
case 9 : cout<<"Nine Hundred ";
break;
}
num=num%100;

}



if(num>=1 && num<=20){
	num2=num;
switch(num2){
case 1 : cout<<"One";
break;
case 2 : cout<<"Two";
break;
case 3 : cout<<"Three";
break;
case 4 : cout<<"Four";
break;
case 5 : cout<<"Five";
break;
case 6 : cout<<"Six";
break;
case 7 : cout<<"Seven";
break;
case 8 : cout<<"Eight";
break;
case 9 : cout<<"Nine";
break;
case 10 : cout<<"Ten";
break;
case 11 : cout<<"Eleven";
break;
case 12 : cout<<"Twelve";
break;
case 13 : cout<<"Thirteen";
break;
case 14 : cout<<"Fourteen";
break;
case 15 : cout<<"Fifteen";
break;
case 16 : cout<<"Sixteen";
break;
case 17 : cout<<"Seventeen";
break;
case 18 : cout<<"Eighteen";
break;
case 19 : cout<<"Nineteen";
break;
case 20 : cout<<"Twenty";
break;
}
}
else
if(num>20 && num<100){
	num1=num/10;
	switch(num1)
	{
case 2 : cout<<"Twenty ";
break; 		
case 3 : cout<<"Thirty ";
break;	
case 4 : cout<<"Fourty ";
break;	
case 5 : cout<<"Fifty ";
break;		
case 6 : cout<<"Sixty ";
break;		
case 7 : cout<<"Seventy ";
break;		
case 8 : cout<<"Eighty ";
break;		
case 9 : cout<<"Ninty ";
break;
	
	}
num1i=num%10;
switch(num1i)
{
case 1 : cout<<"One ";	
break;
case 2 : cout<<"Two ";
break;
case 3 : cout<<"Three ";
break;
case 4 : cout<<"Four ";
break; 
case 5 : cout<<"Five ";
break;
case 6 : cout<<"Six ";
break;
case 7 : cout<<"Seven ";
break;
case 8 : cout<<"Eight ";
break;
case 9 : cout<<"Nine ";
break;	
}
}
getchar();
getchar();
system ("CLS");
}
}
