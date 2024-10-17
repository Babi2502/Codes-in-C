#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	char nome[50];
	float S,SM,N;
	printf("digite seu nome \n");
	scanf("%s",&nome);
	printf("digite seu salario e o salario minimo vigente \n");
	scanf("%f %f",&S,&SM);
	N=S/SM;
	printf("%s \n",nome);
	printf("salario = R$ %.2f \t salario minimo = R$ %.2f \n",S,SM);
	printf("numero de salarios minimos = %.3f \n",N);
	system("pause");
	return 0;
}

