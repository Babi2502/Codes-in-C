#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a[9];
	int i,j;
	j=2;
	for(i=0;i<10;i++)
	{
		a[i]=j;
		j=j+2;
	}
	for(i=0;i<10;i++)
	{
		printf("numero = %.1f \n",a[i]);
	}
	system("pause");
	return 0;
}
