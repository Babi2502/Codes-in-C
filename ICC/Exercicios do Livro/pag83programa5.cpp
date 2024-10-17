#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	float a[9],b[9],c[9];
	char x[9][2];
	int i;
	for(i=0;i<10;i++)
	{
		printf("digite dois numeros : ");
		scanf("%f %f",&a[i],&b[i]);
		fflush(stdin);
		printf("digite uma operacao matematica : ");
		gets(x[i]);
		if(strcmp(x[i],"+")==0)
		{
			c[i]=a[i]+b[i];
		}
		if(strcmp(x[i],"-")==0)
		{
			c[i]=a[i]-b[i];
		}
		if(strcmp(x[i],"*")==0)
		{
			c[i]=a[i]*b[i];
		}
		if(strcmp(x[i],"/")==0)
		{
			c[i]=a[i]/b[i];
		}
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%.2f %s %.2f = %.2f \n",a[i],x[i],b[i],c[i]);
	}
	systm("pause");
	return 0;
}
