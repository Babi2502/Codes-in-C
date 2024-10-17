#include <stdio.h>
#include <stdlib.h>
int main()
{
	char nome[100],sexo[50];
	int ano,idade;
	printf("digite seu nome \n");
	gets(nome);
	printf("digite seu sexo \n");
	gets(sexo);
	printf("digite seu ano de nascimento \n");
	scanf("%d",&ano);
	idade=2021-ano;
	printf("%s %s %d \n",nome,sexo,idade);
	system("pause");
	return 0;
}
