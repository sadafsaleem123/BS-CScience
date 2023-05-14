#include <iostream>
using namespace std;
int main()
{
   char book[50];
   cout<<"Enter your favorite book name:";
   cin>>book;    	/*to print whole setence use instead cin.get(book,50); */
   cout<<"You entered: "<<book;
   return 0;
}
