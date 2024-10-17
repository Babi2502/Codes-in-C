#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float raiz,N;
	int num;
	printf("digite um numero positivo \n");
	scanf("%f",&N);		
	num=1;
	while(num<=10)
	{
		if(N<=0)
		{
			printf("numero invalido, digite outro \n");
			scanf("%f",&N);
		}
		else
		{
			num=num+1;
			raiz=sqrt(N);
			printf("raiz de %.2f = %.2f \n",N,raiz);
			if(num<=10)
			{
				printf("digite outro numero \n");
				scanf("%f",&N);	
			}
		}
	}
	system("pause");
	return 0;
}
