#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0 , b = 0, n;
	printf("Digite um valor para n: ");
	scanf("%d" , &n);
	while (n > 0)
	 {
	    if ( (n%2) == 0 )
		{
		  a = a + 1;
		}
	    else
		{
		  b = b + 1;
		}
	   n =  n/2;
	}
	printf("%d %d \n", a, b);
}
