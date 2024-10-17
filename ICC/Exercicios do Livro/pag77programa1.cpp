#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,num;
	float soma,m;
	num=1;
	soma=0;
	printf("digite um numero inteiro e positivo \n");
	scanf("%d",&N);
	while(num<=N)
	{
		soma=soma+num;
		num=num+1;
	}
	m=soma/N;
	printf("soma = %.2f \t meida = %.2f \n",soma,m);
	system("pause");
	return 0;
}
