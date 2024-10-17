#include <stdio.h>
#include <stdlib.h>
int main()
{
	float matriz[49][49],mn[49][49],k,q;
	int m,i,j;
	printf("digite um numero de 1 ate 49 : ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("digite um numero : ");
			scanf("%f",&matriz[i][j]);
		}
	}
	printf("digite dois numeros : ");
	scanf("%f %f",&k,&q);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			{
				mn[i][j]=matriz[i][j]*k;
			}
			else
			{
				mn[i][j]=matriz[i][j]*q;
			}
		}
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%.2f \t",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%.2f \t",mn[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
