#include <stdio.h>
#include <stdlib.h>
int main()
{
	float N1,N2,M;
	printf("digite duas notas \n");
	scanf("%f %f",&N1,&N2);
	if(((N1>10)||(N1<0))||((N2>10)||(N2<0)))
	{
		printf("nota invalida \n");
	}
	else
	{
		M=(N1+N2)/2;
		if(M<5)
		{
			printf("reprovado \n");
		}
		else 
		{
			printf("aprovado \n");
		}
	}
	system("pause");
	return 0;
}
