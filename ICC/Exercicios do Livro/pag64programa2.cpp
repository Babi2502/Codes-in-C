#include <stdio.h>
#include <stdlib.h>
int main()
{
	float idade;
	printf("digite sua idade \n");
	scanf("%f",&idade);
	if(((idade>=16)&&(idade<18))||(idade>=65))
	{
		printf("eleitor facultativo \n");
	}
	else
	{
		if(idade<16)
		{
			printf("nao eleitor \n");
		}
		else
		{
			printf("eleitor obrigatorio \n");
		}
	}
	system("pause");
	return 0;
}
