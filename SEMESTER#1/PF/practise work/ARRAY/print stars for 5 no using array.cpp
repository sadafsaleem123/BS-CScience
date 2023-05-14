#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter five numbers"<<endl;
	for(int i=0;i<5;i++)
	cin>>arr[i];
    for(int j=0;j<5;j++)
    {
    	cout<<arr[j]<<"\t";   	
		for(int k=1;k<=arr[j];k++)
		cout<<"*";
    	cout<<endl;
}
	}

