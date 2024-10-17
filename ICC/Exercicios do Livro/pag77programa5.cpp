#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int num,N;
	printf("digite um numero positivo ou -999 para finalizar \n");
	scanf("%d",&N);
	while(N!=-999)
	{
		for(num=1;num<=N;num++)
		{
			if(N%num==0)
			{
				printf("divisor de %d = %d \n",N,num);
			}
		}
		printf("digite um numero positivo ou -999 para finalizar \n");
		scanf("%d",&N);
	}
	system("pause");
	return 0;
}
