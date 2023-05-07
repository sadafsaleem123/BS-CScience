/*
Write a program which will take pointer and display the number on screen. Take number from user and print it on screen using that function.
*/
#include <iostream>
using namespace std;

int print(int *a)				//def
{

	cout<<"no is = "<<*a;
}
int main()
{

  int x;
  cout<<"enter a no =";
  cin>> x;
  cout<<&x;

  

}

