#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float SM,N,S;
	printf("digite o sabario minimo \n");
	scanf("%f",&SM);
	printf("digite o numero de carros vendidos \n");
	scanf("%f",&N);
	S=SM*2+N*50+N*2.5;
	printf("salario do funcionario = R$ %.2f \n",S);
	system("pause");
	return 0;
}
