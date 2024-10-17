#include <stdio.h>
#include <stdlib.h>
int main()
{
	float H,num;
	int N;
	printf("digite um numero maior que 0 \n");
	scanf("%d",&N);
	H=0;
	for(num=1;num<=N;num++)
	{
		H=H+1/num;
	}
	printf("H = %.3f \n",H);
	system("pause");
	return 0;
}
