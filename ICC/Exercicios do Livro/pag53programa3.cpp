#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int N1,N2,R;
	printf("digite 2 numeros inteiros diferentes de 0 \n");
	scanf("%d %d",&N1,&N2);
	R=N1%N2;
	printf("resto da divisao = %d \n",R);
	system("pause");
	return 0;
}
