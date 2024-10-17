#include <stdio.h>
#include <stdlib.h>
int main()
{
	float num,N,X;
	printf("digite um numero \n");
	scanf("%f",&N);
	for(num=1;num<=10;num++)
	{
		X=N*num;
		printf("%.0f * %.0f = %.0f \n",N,num,X);
	}
	system("pause");
	return 0;
}
