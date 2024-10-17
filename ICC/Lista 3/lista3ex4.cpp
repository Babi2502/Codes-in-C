#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	char letra;
	printf("digite A, B, C, D ou E: ");
	letra=getche();
	if((letra=='A')||(letra=='a'))
	{
		printf("\n conceito exelente \n");
	}
	if((letra=='B')||(letra=='b'))
	{
		printf("\n conceito bom \n");
	}
	if((letra=='C')||(letra=='c'))
	{
		printf("\n conceito satisfatorio \n");
	}
	if((letra=='D')||(letra=='d'))
	{
		printf("\n conceito insatisfatorio \n");
	}
	if((letra=='E')||(letra=='e'))
	{
		printf("\n conceito ruim \n");
	}
	system("pause");
	return 0;
}
