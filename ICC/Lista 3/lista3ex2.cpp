#include <stdio.h>
#include <stdlib.h>
int main()
{
	char nome[100];
	printf("digite seu nome completo \n");
	gets(nome);
	printf("%s \n",nome);
	system("pause");
	return 0;
}
