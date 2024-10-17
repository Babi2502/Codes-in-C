#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int N1,N2,N3,N4;
	printf("digite 4 numeros inteiros \n");
	scanf("%d %d %d %d",&N1,&N2,&N3,&N4);
	if((N1%2==0)&&(N1%3==0))
	{
		printf("%d \t",N1);
	}
	if((N2%2==0)&&(N2%3==0))
	{
		printf("%d \t",N2);
	}
	if((N3%2==0)&&(N3%3==0))
	{
		printf("%d \t",N3);
	}
	if((N4%2==0)&&(N4%3==0))
	{
		printf("%d \n",N4);
	}
	system("pause");
	return 0;
}
