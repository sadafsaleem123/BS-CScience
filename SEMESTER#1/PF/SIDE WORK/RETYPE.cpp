#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a[26];
	char alpha;
	for(int i=0;i<26;i++){
		a[i]=0;
	}
	do{
		alpha=getche();
		int b=alpha-'a';
		a[b]++;
	}
	while(alpha!='$');
	cout<<endl;
	for(int j=0;j<26;j++){
		cout<<(char)(j+97)<<":"<<a[j]<<endl;
	}
}
