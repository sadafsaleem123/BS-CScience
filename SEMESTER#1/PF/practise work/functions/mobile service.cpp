#include<iostream>
#include<conio.h>
void mobileservice1();
void mobileservice2();
using namespace std;
int main(){int num,num2;
	while(1){
		system ("CLS");
		cout<<"Press 111 for Internet Packages"<<endl;
		cout<<"Press 222 for Call Packages"<<endl;
		cout<<"Press 333 for SMS Packages"<<endl;
		cin>>num;
		switch (num){
			case 111:
				mobileservice1();
	    		break;
			case 222:
				mobileservice2();
				break;	
			case 4:
				system("cls");
				cout<<"Thank you for using application";
				getch();
				return 0;				
		}
	}	
}
void mobileservice1()
{	int num2;
	while(1){
		system("cls");
		cout<<"Internet Packages are the Following"<<endl;
		cout<<"Press 1 for 500 MB for 24 Hours"<<endl;
		cout<<"Press 2 for 1500 MB for 24 Hours"<<endl;
		cout<<"Press 3 for 2000 MB for a Week"<<endl;
		cout<<"Press 4 to go Back"<<endl;
		cin>>num2;
		switch(num2){
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
void mobileservice2()
{ 	int num2;
	while(1)
	{
		system("cls");
		cout<<"Call Packages are the following"<<endl;
		cout<<"Press 1 for 90 mins for 24 Hours"<<endl;
		cout<<"Press 2 for 120 mins for 24 Hours"<<endl;
		cout<<"Press 3 To go Back"<<endl;
		cin>>num2;
		switch(num2){
		   	case 1:
				cout<<"Successfully Subscribed";
		 		break;
		 	case 2:
			 	cout<<"Successfully Subscribed";
		 	case 3:
		 		return;
		}
		getch();
	}	
}

