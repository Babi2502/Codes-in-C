#include <stdio.h>
#include <stdlib.h>
int main()
{
	float N,nt,somap,x,soman,y,m,por;
	nt=0;
	somap=0;
	x=0;
	soman=0;
	y=0;
	m=0;
	por=0;
	printf("digite um numero ou digite 0 para finalizar \n");
	scanf("%f",&N);
	while(N!=0)
	{
		nt=nt+1;
		if(N>0)
		{
			somap=somap+N;
			x=x+1;
		}
		else
		{
			soman=soman+N;
			y=y+1;
		}
		printf("digite um numero ou digite 0 para finalizar \n");
	    scanf("%f",&N);
	}
	m=soman/y;
	por=100*x/nt;
	printf("soma dos positivos = %.2f \n",somap);
	printf("media dos negativos = %.2f \n",m);
	printf("porsentagem dos positivos = %.2f \n",por);
	system("pause");
	return 0;
}
