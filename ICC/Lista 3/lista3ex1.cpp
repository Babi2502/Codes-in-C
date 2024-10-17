#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char capital[50];
	printf("digite a capital do Brasil \n");
	gets(capital);
	if((strcmp(capital,"distrito federal")==0)||(strcmp(capital,"DISTRITO FEDERAL")==0)||(strcmp(capital,"Distrito Federal")==0))
	{
		printf("restosta correta \n");
	}
	else
	{
		printf("restosta incorreta \n");
	}
	system("pause");
	return 0;
}
