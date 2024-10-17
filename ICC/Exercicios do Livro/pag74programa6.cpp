#include <stdio.h>
#include <stdlib.h>
int main()
{
	float N,maior,menor;
	int num;
	printf("digite um numero \n");
	scanf("%f",&N);
	maior=N;
	menor=N;
	for(num=1;num<=9;num++)
	{
		printf("digite um numero \n");
		scanf("%f",&N);
		if(N>maior)
		{
			maior=N;
		}
		if(N<menor)
		{
			menor=N;
		}
	}
	printf("maior numero digitado = %.3f \n",maior);
	printf("menor numero digitado = %.3f \n",menor);
	system("pause");
	return 0;
}
