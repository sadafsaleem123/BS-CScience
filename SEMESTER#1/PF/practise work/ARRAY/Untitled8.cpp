#include <iostream>
using namespace std;
void display(int marks[5]);
int main()
{
    int marks[5];
    cout<<"enter marks = ";
	cin>>marks[5];
	 for(marks[5]=0 ; marks[5]<5 ; marks[5]++)
	display(marks);
    
}
void display(int m[5])
{

    for (int i = 0; i < 3 ; ++i)
    {
    	    cout << "marks: "<< endl;
    	int m[i];
        cout << "Student "<< i + 1 <<": "<< m[i] << endl;
    }
	}
