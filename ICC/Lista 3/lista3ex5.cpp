#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	char om;
	float n1,n2,x;
	printf("digite uma operação matematica \n");
	scanf("%c",&om);
	printf("digite 2 numeros \n");
	scanf("%f %f",&n1,&n2);
	if(om=='+')
	{
		x=n1+n2;
		printf("%.2f + %.2f = %.2f \n",n1,n2,x);
	}
	if(om=='-')
	{
		x=n1-n2;
		printf("%.2f - %.2f = %.2f \n",n1,n2,x);
	}
	if(om=='*')
	{
		x=n1*n2;
		printf("%.2f * %.2f = %.2f \n",n1,n2,x);
	}
	if(om=='/')
	{
		x=n1/n2;
		printf("%.2f / %.2f = %.2f \n",n1,n2,x);
	}
	system("pause");
	return 0;
}
