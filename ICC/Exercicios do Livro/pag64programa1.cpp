#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int N;
	printf("digite 1 numero inteiro \n");
	scanf("%d",&N);
	if(N%3==0)
	{
		printf("e multiplo de 3 \n");
	}
	else
	{
		printf("nao e multiplo de 3 \n");
	}
	system("pause");
	return 0;
}
