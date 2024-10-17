// matrizes elementares

#include <stdio.h>

main()
{
	int lin, col;
	
	// preenchimento modo 1
	int M[3][3] = {2,3,4, 0,-3,2, 0,-1,1};
	int N[3][3] = {{3,1,4}, {0,3,-2}, {0,1,1}};
	int P[3][3];
	
	// preenchimento modo 2
	// matriz M
	printf("\nMatriz M:\n");
	for (lin=0; lin<3; lin++)
	{
		for(col=0; col<3; col++)
		{
			printf("digite o elemento M[%d][%d]:", lin+1, col+1);
			scanf("%d", &M[lin][col]);
		}
		printf("\n");	
	}
	printf("\n");
	
	// exibindo
	// matriz M
	printf("\nMatriz M: \n");
	for(lin=0; lin<3; lin++) // para as linhas 
	{
		for(col=0; col<3; col++) // para as colunas 
		{
			printf("%4d", M[lin][col]);
		}
		printf("\n");
	}
	printf("\n");
	
	// matriz N
	printf("\nMatriz N: \n");
	for(lin=0; lin<3; lin++)
	{
		for(col=0; col<3; col++)
		{
			printf("%4d", N[lin][col]);
		}
		printf("\n");
	}
	printf("\n");
	
	// soma das matrizes M e N
	for (lin=0; lin<3; lin++)
	{
		for(col=0; col<3; col++)
		{
			P[lin][col] = M[lin][col] + N[lin][col];
		}
	}
	
	// matiz soma P
	printf("\nMatriz soma P:\n");
	for (lin=0; lin<3; lin++)
	{
		for(col=0; col<3; col++)
		{
			printf("%4d", P[lin][col]);
		}
		printf("\n");
	}
	printf("\n");
	
} // fim do main