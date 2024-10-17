#include <stdio.h>
#include <stdlib.h>
int main()
{
	float m,soma;
	int num,N;
	printf("digite um numero inteiro e positivo \n");
	scanf("%d",&N);
	soma=0;
	for(num=1;num<=N;num++)
	{
		soma=soma+num;
	}
	m=soma/N;
	printf("meida aritimetica = %.3f \n",m);
	system("pause");
	return 0;
}
