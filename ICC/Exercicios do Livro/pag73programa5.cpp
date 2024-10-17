#include <stdio.h>
#include <stdlib.h>
int main()
{
	float X,maior;
	int num;
	printf("digite um numero \n");
	scanf("%f",&X);
	maior=X;
	for(num=1;num<=49;num++)
	{
		printf("digite um numero \n");
		scanf("%f",&X);
		if(X>=maior)
		{
			maior=X;
		}
	}
	printf("o maior numero digitado foi : %.3f \n",maior);
}
