#include <stdio.h>
#include <stdlib.h>
int main()
{
	float matriz[3][2],soma,sp,x,mp,sn,y,mn;
	int i,j;
	soma=0; sp=0; x=0; mp=0; sn=0; y=0; mn=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("digite um numero : ");
			scanf("%f",&matriz[i][j]);
			soma=soma+matriz[i][j];
			if(matriz[i][j]>0)
			{
				sp=sp+matriz[i][j];
				x=x+1;
			}
			if(matriz[i][j]<0)
			{
				sn=sn+matriz[i][j];
				y=y+1;
			}
		}
	}
	printf("\n");
	printf("soma de todos os elementos = %.2f \n",soma);
	if(x==0)
	{
		printf("meida dos positivos = 0 \n");
	}
	else
	{
		mp=sp/x;
		printf("media dos positivos = %.2f \n",mp);
	}
	if(y==0)
	{
		printf("media dos negativos = 0 \n");
	}
	else
	{
		mn=sn/y;
		printf("media dos negativos = %.2f \n",mn);	
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f \t",matriz[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
