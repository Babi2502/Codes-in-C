#include <stdio.h>
#include <stdlib.h>
int main()
{
	float N;
	printf("digite 1 numero \n");
	scanf("%f",&N);
	if(N==0)
	{
		printf("voce digitou um numero nulo \n");
	}
	else
	{
		if(N>0)
		{
			printf("voce digitou um numero positivo \n");
		}
		else
		{
			printf("voce digitou um numero negativo \n");
		}
	}
	system("pause");
	return 0;
}
