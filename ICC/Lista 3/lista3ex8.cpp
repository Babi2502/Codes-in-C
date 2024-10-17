#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char senha[7];
	printf("digite sua senha \n");
	gets(senha);
	if(strcmp(senha,"Xya1#F")==0)
	{
		printf("acesso permitido \n");
	}
	else
	{
		printf("acesso negado \n");
	}
	system("pause");
	return 0;
}
