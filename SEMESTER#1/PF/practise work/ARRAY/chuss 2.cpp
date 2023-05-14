#include<iostream>
using namespace std;
int main()
{
	int marks[4][3];
	for(int i=0;i<4;i++){
			cout<<"Enter roll no";
			cin>>marks[i][0];
			for(int j=0;j<4;j++){
				cout<<"Enter Marks PF =";
				cin>>marks[j][1];
				for(int k=0;k<4;k++){
					cout<<" Enter Marks BE = ";
					cin>>marks[k][2];
				}
			}
	}
return 0;
}
