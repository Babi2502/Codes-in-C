#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int N;
	printf("digite 1 numero inteiro \n");
	scanf("%d",&N);
	if(N==0)
	{
		printf("voce digitou um numero nulo \n");
	}
	else
	{
		if(N%2==0)
		{
			printf("voce digitou um numero par \n");
		}
		else
		{
			printf("voce digitou um numero impar \n");
		}
	}
	system("pause");
	return 0;
}
