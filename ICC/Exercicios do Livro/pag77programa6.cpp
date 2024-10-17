#include <stdio.h>
#include <stdlib.h>
int main()
{
	float kwh,tipo,c,ct1,ct2,ct3,tc1,tc2,tc3,m1,m2,x1,x2,pot,y,T;
	ct1=0; ct2=0; ct3=0; tc1=0; tc2=0; tc3=0; x1=0; x2=0; y=0; T=0; pot=0; m1=0; m2=0;
	printf("digite a quantidade de Kwh consumido \n");
	scanf("%f",&kwh);
	printf("digite o tipo \n");
	scanf("%f",&tipo);
	while(tipo!=0)
	{
		T=T+1;
		if(tipo==1)
		{
			c=kwh*0.3;
			ct1=ct1+c;
			tc1=tc1+kwh;
			x1=x1+1;
		}
		if(tipo==2)
		{
			c=kwh*0.5;
			ct2=ct2+c;
			tc2=tc2+kwh;
			x2=x2+1;
		}
		if(tipo==3)
		{
			c=kwh*0.7;
			ct3=ct3+c;
			tc3=tc3+kwh;
			y=y+1;
		}
		printf("digite a quantidade de Kwh consumido \n");
		scanf("%f",&kwh);
		printf("digite o tipo \n");
		scanf("%f",&tipo);
	}
	m1=tc1/x1;
	m2=tc2/x2;
	pot=100*y/T;
	printf("custo total do tipo 1 = %.2f \n",ct1);
	printf("custo total do tipo 2 = %.2f \n",ct2);
	printf("custo total do tipo 3 = %.2f \n",ct3);
	printf("total consumido de Kwh do tipo 1 = %.3f \n",tc1);
	printf("total consumido de Kwh do tipo 2 = %.3f \n",tc2);
	printf("total consumido de Kwh do tipo 3 = %.3f \n",tc3);
	printf("media consumida do tipo 1 = %.2f \n",m1);
	printf("media consumida do tipo 2 = %.2f \n",m2);
	printf("porcebtagem de consumidores do tipo 3 = %.2f %% \n",pot);
	system("pause");
	return 0;
}
