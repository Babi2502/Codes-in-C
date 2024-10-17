#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a[9],b[9];
	int i;
	for(i=0;i<10;i++)
	{
		printf("digite um numero : ");
		scanf("%f",&a[i]);
		b[i]=a[i]*(-1);
	}
	for(i=0;i<10;i++)
	{
		printf("%.2f \t %.2f \n",a[i],b[i]);
	}
	system("pause");
	return 0;
}


