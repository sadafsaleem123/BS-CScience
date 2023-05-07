#include <iostream> 
#include <conio.h> 
using namespace std;  
char tolower(char);                                //prototype
int main()
{   
    char ch; 
    cout<<"Enter any character= ";
    cin>>ch;
    tolower(ch);
}
char tolower(char ch)                             //definitiom
{
    cout<<"no is represented  ",ch,tolower(ch);  // convert ch to lowercase using toLower()   
    return ch; 
}  

