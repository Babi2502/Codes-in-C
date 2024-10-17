#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char nome[5][100];
	float nota[5][4], media[5];
	int i,j;
	for(i=1;i<=5;i++)
	{
		fflush(stdin);
		printf("Digite o nome do aluno(a) numero %d de 5: ",i);
		gets(nome[i]);
		for(j=1;j<=4;j++)
		{
			printf("Digite a nota %d do aluno(a) %s : ",j,nome[i]);
			scanf("%f",&nota[i][j]);
		}
		media[i]=(nota[i][1]+nota[i][2]+nota[i][3]+nota[i][4])/4;
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		if(media[i]>=6)
		{
			printf("O aluno(a) %s foi aprovado \n",nome[i]);
			printf("nota 1 = %.1f \t nota 2 = %.1f \t nota 3 = %.1f \t nota 4 = %.1f \t",nota[i][1],nota[i][2],nota[i][3],nota[i][4]);
			printf("media = %.2f \n \n",media[i]);
		}
		else
		{
			printf("O aluno(a) %s foi reprovado \n",nome[i]);
			printf("nota 1 = %.1f \t nota 2 = %.1f \t nota 3 = %.1f \t nota 4 = %.1f \t",nota[i][1],nota[i][2],nota[i][3],nota[i][4]);
			printf("media = %.2f \n \n",media[i]);
		}
	}
	system("pause");
	return 0;
}
