#include<iostream>
using namespace std;
int main(){
	int array[4][3],k;
	for(int i=0;i<4;i++){
		cin>>array[i][0];
		cout<<"\t";
		for(int j=1;j<3;j++){
			cin>>array[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	cout<<"Enter Roll No:";
	cin>>k;
	for(int i=0;i<4;i++){
		if(k==array[i][0]){
			for(int j=0;j<3;j++){
				cout<<array[i][j]<<"\t";
			}
		}
	}
}


