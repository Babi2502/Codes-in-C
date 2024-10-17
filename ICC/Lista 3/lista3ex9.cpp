#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char sexo[50];
	float h,p;
	printf("digite seu sexo \n");
	gets(sexo);
	printf("digite sua altura \n");
	scanf("%f",&h);
	if(strcmp(sexo,"masculino")==0)
	{
		p=72.7*h-58;
		printf("peso ideal = %.3f \n",p);
	}
	else
	{
		p=62.1*h-44.7;
		printf("peso ideal = %.3f \n",p);
	}
	system("pause");
	return 0;
}
