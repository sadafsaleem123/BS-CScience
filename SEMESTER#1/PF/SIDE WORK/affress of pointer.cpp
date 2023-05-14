#include<iostream>
using namespace std;
int main()
{
int a;

int *b;

b=&a;

printf("\nenter number=");

scanf("%d",&a);

printf("%u\n",&*b);

printf("%u",b);

return 0;

}
