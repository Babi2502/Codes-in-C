#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a[9],b[9],c[9];
	int i;
	for(i=0;i<10;i++)
	{
		printf("difite dois numeros : ");
		scanf("%f %f",&a[i],&b[i]);
		c[i]=a[i]+b[i];
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%.2f + %.2f = %.2f \n",a[i],b[i],c[i]);
	}
	system("pause");
	return 0;
}
