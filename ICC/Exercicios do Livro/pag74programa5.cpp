#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float p,m,x,n,y,por,n0;
	int N,num;
	p=0;
	m=0;
	n=0;
	y=0;
	por=0;
	n0=0;
	for(num=1;num<=10;num++)
	{
		printf("digite um numero \n");
		scanf("%d",&N);
		if(N==0)
		{
			n0=n0+1;
		}
		else
		{
			if(N>0)
			{
				p=p+1;
			}
			else
			{
				n=n+N;
				x=x+1;
			}
			if(N%2!=0)
			{
				y=y+1;
			}
		}
	}
	m=n/x;
	por=100*y/10;
	printf("positivos = %.1f \n",p);
	printf("meidia aritimetica dos negativos = %.2f \n",m);
	printf("procentagem dos impares = %.2f % \n",por);
	printf("quatidade de 0 = %.1f \n",n0);
	system("pause");
	return 0;
}
