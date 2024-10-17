#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,N,soma;
	soma=0;
	printf("digite um numero inteiro \n");
	scanf("%d",&N);
	for(num=1;num<=N;num++)
	{
		printf("numero = %d \n",num);
		soma=soma+num;
	}
	printf("soma = %d \n",soma);
	system("pause");
	return 0;
}
