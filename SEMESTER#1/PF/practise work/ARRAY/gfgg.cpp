#include<iostream>
#include<string>
using namespace std;
int main(){
	int word=0,i=0,alphabat[26];
	for(int k=0;k<26;k++)
	alphabat[k]=0;
	char str[250];
	gets(str);
	for(int i;str[i]!='\0';i++){
		if (str[i]==' '||str[i]=='.')
		word++;
		alphabat[int(str[i]-'a')]++;
}
cout<<"no of characters:"<<i;
	cout<<"words:"<<word;
for(int m=0;m<26;m++)
cout<<(char)(m+97)<<"\t"<<alphabat[m]<<endl;
}
