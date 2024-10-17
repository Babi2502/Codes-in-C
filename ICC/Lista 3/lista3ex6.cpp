#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char nome[100],sexo[20];
	int idade;
	printf("digite seu nome \n");
	gets(nome);
	printf("digete seu sexo \n");
	gets(sexo);
	printf("digete sua idade \n");
	scanf("%d",&idade);
	if((strcmp(sexo,"feminino")==0)&&(idade<25))
	{
		printf("%s aceito! \n",nome);
	}
	else
	{
		printf("%s nao aprovado! \n",nome);
	}
	system("pause");
	return 0;
}
