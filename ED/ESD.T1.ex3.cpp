// Exercicio 4

#include <stdio.h>
#include <stdlib.h>

main()
{
	int M, N1, N2, P, i, j, x, aux=0;
	
	printf(" Insira o numero de linhas da matriz A:");
	scanf("%d", &M);
	printf(" Insira o numero de colunas da matriz A:");
	scanf("%d", &N1);
	
	printf("\n Insira o numero de linhas da matriz B:");
	scanf("%d", &N2);
	printf(" Insira o numero de colunas da matriz B:");
	scanf("%d", &P);
	
	int A[M][N1], B[N2][P], C[M][P];
	
	if (N1 != N2)
	{
		printf("\n O programa nao pode ser executado");
	} //fim if
	else 
	{
		printf("\n Preenchimento das matrizes\n\n");
		for(i=0; i<M; i++)
		{
			for(j=0; j<N1; j++)
			{
				printf(" Digite o elemento A[%d][%d]:", i+1, j+1);
				scanf("%d", &A[i][j]);
			}
			printf("|\n");	
		}
		
		for(i=0; i<N2; i++)
		{
			for(j=0; j<P; j++)
			{
				printf(" Digite o elemento B[%d][%d]:", i+1, j+1);
				scanf("%d", &B[i][j]);
			}
			printf("\n");	
		}
		
		for(i=0; i<M; i++)
		{
			for(j=0; j<P; j++)
			{
				for(x=0; x<N1; x++)
				{
					aux += A[i][x] * B[x][j];
				}
				C[i][j] = aux;
				aux = 0;
			}
		}
		
		printf("\n Matriz C: \n");
		for(i=0; i<M; i++)
		{
			for(j=0; j<P; j++)
			{
				printf(" %4d", C[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	} //fim else
}