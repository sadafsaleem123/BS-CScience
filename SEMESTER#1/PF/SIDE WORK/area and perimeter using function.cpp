#include <stdio.h>

int power(int a, int b)			
{
    int i,product = 1;
    for(i=1;i<=b;i++)	
    {
      product = product*a;		
    }
    return product;
}

int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
  printf("%d\n",power(a,b));
  return 0;
}
	
