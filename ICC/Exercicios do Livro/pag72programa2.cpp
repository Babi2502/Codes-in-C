#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int num,X;
	for(num=1;num<=25;num++)
	{
		X=pow(num,2);
		printf("quadrado de %d = %d \n",num,X);
	}
	system("pause");
	return 0;
}
