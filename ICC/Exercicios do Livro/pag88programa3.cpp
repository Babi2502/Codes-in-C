#include <stdio.h>
#include <stdlib.h>
int main()
{
	float matriz[6][5],qi[4],ctp[4],cta[4];
	int ma2,me4,i,j;
	ma2=1;me4=1;
	qi[4]={0}; ctp[4]={0}; cta[4]={0};
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("digite o numero de produdos %d do armazem %d : ",j,i);
			scanf("%f",&matriz[i][j]);
			qi[i]=qi[i]+matriz[i][j];
		}
	}
	for(j=1;j<=4;j++)
	{
		printf("digite o custo do produto %d : ",j);
		scanf("%f",&matriz[5][j]);
	}
	for(i=2;i<=4;i++)
	{
		if(matriz[i][2]>matriz[i-1][2])
		{
			ma2=i;
		}
		if(matriz[i][4]<matriz[i-1][4])
		{
			me4=i;
		}
	}
	for(j=1;j<=4;j++)
	{
		for(i=1;i<=4;i++)
		{
			ctp[j]=ctp[j]+matriz[i][j];
		}
	}
	for(j=1;j<=4;j++)
	{
		ctp[j]=ctp[j]*matriz[5][j];
	}
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			cta[i]=cta[i]+matriz[i][j]*matriz[5][j];
		}
	}
	printf("\n");
	for(i=1;i<=4;i++)
	{
		printf("quantidade de itens no armazem %d = %.2f \n",i,qi[i]);
	}
	printf("armazem com mais produtos 2 = %d \n",ma2);
	printf("armazem com menos produtos 4 = %d \n",me4);
	for(i=1;i<=4;i++)
	{
		printf("custo total do produto %d = %.2f \n",i,ctp[i]);
	}
	for(i=1;i<=4;i++)
	{
		printf("custo total do armazem %d = %.2f \n",i,cta[i]);
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%.2f \t",matriz[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
