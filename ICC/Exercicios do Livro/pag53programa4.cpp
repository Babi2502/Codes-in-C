#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float A,B,C,D;
	printf("digite as 3 dimencoes da caixa \n");
	scanf("%f %f %f",&A,&B,&C);
	D=sqrt(pow(A,2)+pow(B,2)+pow(C,2));
	printf("diagonal do caixa = %.3f m \n",D);
	system("pause");
	return 0;
}
