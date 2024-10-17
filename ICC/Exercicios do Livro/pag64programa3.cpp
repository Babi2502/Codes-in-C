#include <stdio.h>
#include <stdlib.h>
int main()
{
	float N1,N2,soma,sub;
	printf("digite 2 numeros \n");
	scanf("%f %f",&N1,&N2);
	if((N1+N2)<10)
	{
		sub=N1+N2-7;
		printf("%.2f \n",sub);
	}
	else
	{
		soma=N1+N2+5;
		printf("%.2f \n",soma);
	}
	system("pause");
	return 0;
}
