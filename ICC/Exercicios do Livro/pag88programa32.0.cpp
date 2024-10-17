#include <stdio.h>
#include <stdlib.h>
int main()
{
	float matriz[5][4],qi[4],ctp[4],cta[4];
	int ma2,me4,i,j,x,y,a;
	ma2=1;me4=1;x=1;y=1;
	qi[4]={0};ctp[4]={0};cta[4]={0};
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("digite o numero de produdos %d do armazem %d : ",x,y);
			scanf("%f",&matriz[i][j]);
			qi[i]=qi[i]+matriz[i][j];
			x=x+1;
		}
		y=y+1;x=1;
	}
	x=1;
	for(j=0;j<4;j++)
	{
		printf("digite o custo do produto %d : ",x);
		scanf("%f",&matriz[4][j]);
		x=x+1;
	}
	for(i=0;i<4;i++)
	{
		a=i-1;
		if(matriz[i][1]>matriz[a][1])
		{
			ma2=i+1;
		}
		if(matriz[i][3]<matriz[a][3])
		{
			me4=i+1;
		}
	}
	for(j=0;j<4;j++)
	{
		for(i=0;i<4;i++)
		{
			ctp[j]=ctp[j]+matriz[i][j];
		}
	}
	for(j=0;j<4;j++)
	{
		ctp[j]=ctp[j]*matriz[4][j];
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cta[i]=cta[i]+matriz[i][j]*matriz[4][j];
		}
	}
	x=1;
	printf("\n");
	for(i=0;i<4;i++)
	{
		printf("quantidade de itens no armazem %d = %.2f \n",x,qi[i]);
		x=x+1;
	}
	printf("armazem com mais produtos 2 = %d \n",ma2);
	printf("armazem com menos produtos 4 = %d \n",me4);
	x=1;
	for(i=0;i<4;i++)
	{
		printf("custo total do produto %d = %.2f \n",x,ctp[i]);
		x=x+1;
	}
	x=1;
	for(i=0;i<4;i++)
	{
		printf("custo total do armazem %d = %.2f \n",x,cta[i]);
		x=x+1;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%.2f \t",matriz[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
} 
