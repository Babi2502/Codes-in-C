#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char sigla[5];
	printf("digite a sigla do seu estado \n");
	gets(sigla);
	if((strcmp(sigla,"RJ")==0)||(strcmp(sigla,"rj")==0))
	{
		printf("carioca \n");
	}
	else
	{
		if((strcmp(sigla,"SP")==0)||(strcmp(sigla,"sp")==0))
		{
			printf("paulista \n");
		}
		else
		{
			if((strcmp(sigla,"MG")==0)||(strcmp(sigla,"mg")==0))
			{
				printf("mineiro \n");
			}
			else
			{
				printf("outro estado \n");
			}
		}
	}
	system("pause");
	return 0;
}
