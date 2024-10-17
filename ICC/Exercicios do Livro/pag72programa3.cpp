#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N,num;
	printf("digite um numero positivo \n");
	scanf("%d",&N);
	for(num=1;num<=N;num++)
	{
		printf("numero = %d \n",num);
	}
	system("pause");
	return 0;
}
