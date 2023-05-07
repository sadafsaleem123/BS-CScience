#include<iostream>
#include<conio.h>
void menu1();
void menu2();
using namespace std;
int main()
{
int n1,n2;
	while(1){
		system ("CLS");
		cout<<"Press 1 to find internet packages"<<endl;
		cout<<"Press 2 to find call pakages"<<endl;
		cin>>n1;
		switch (n1){
			case 1:
				menu1();
	    		break;
			case 2:
				menu2();
				break;	
			case 4:
				system("cls");
				cout<<"Thank you for using application";
				getch();
				return 0;				
		}
	}	
}
void menu1()
{	int n2;
	while(1){
		system("cls");
		cout<<"Internet Packages are the Following"<<endl;
		cout<<"Press 1 for 500 MB for 24 Hours"<<endl;
		cout<<"Press 2 for 1500 MB for 24 Hours"<<endl;
		cout<<"Press 3 for 2000 MB for a Week"<<endl;
		cout<<"Press 4 to go Back"<<endl;
		cin>>n2;
		switch(n2){
			case 1:cout<<"Sucessfully Subscribed";
				break;
			case 2:cout<<"Sucessfully Subscribed";
				break;
			case 3:cout<<"Sucessfully Subscribed";
				break;
			case 4:
				return;
		}
		getch();
	}
}
void menu2()
{ 	int n2;
	while(1)
	{
		system("cls");
		cout<<"Call Packages are the following"<<endl;
		cout<<"Press 1 for 90 mins for 24 Hours"<<endl;
		cout<<"Press 2 for 120 mins for 24 Hours"<<endl;
		cout<<"Press 3 To go Back"<<endl;
		cin>>n2;
		switch(n2){
		   	case 1:
				cout<<"Successfully Subscribed";
		 		break;
		 	case 2:
			 	cout<<"Successfully Subscribed";
			 	break;
		 	case 3:
		 		return;
		}
		getch();
	}	
}

