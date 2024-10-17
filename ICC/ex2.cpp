#include <stdio.h>
#include <stdlib.h>
int main()
{
	float nota;
	printf("digite uma nota \n");
	scanf("%f",&nota);
	if((nota<0)||(nota>10))
	{
		printf("nota invalida \n");
	}
	else
	{
		if(nota<5)
		{
			printf("reprovado \n");
		}
		else
		{
			printf("aprovado \n");
		}
	}
	system("pause");
	return 0;
}
