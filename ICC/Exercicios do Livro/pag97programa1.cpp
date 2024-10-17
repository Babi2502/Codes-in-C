#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	struct a
	{
		char nome[50];
		float salario;
	}funcionario[10];
	int i,am,entre,j;
	char nf[50];
	float ms;
	am=0; entre=0;
	for(i=0;i<10;i++)
	{
		fflush(stdin);
		printf("digite o nome do funcionario \n");
		gets(funcionario[i].nome);
		printf("digete seu salario \n");
		scanf("%f",&funcionario[i].salario);
		if(funcionario[i].salario>1000)
		{
			am=am+1;
		}
		if((funcionario[i].salario>2500)&&(funcionario[i].salario<5000))
		{
			entre=entre+1;
		}
	}
	strcpy(nf,funcionario[0].nome);
	ms=funcionario[0].salario;
	for(i=1;i<10;i++)
	{
		j=i-1;
		if(funcionario[i].salario>funcionario[j].salario)
		{
			strcpy(nf,funcionario[i].nome);
			ms=funcionario[i].salario;
		}
	}
	printf("%d : numero de funcionarios com salario acima de 1000,00 reais \n",am);
	printf("%d : numero de funcionarios com salario entre 2500,00 e 5000,00 reais \n",entre);
	printf("%f : maior salario \n",ms);
	printf("%s : funcionario com o maior salario \n",nf);
	system("pause");
	return 0;
}
