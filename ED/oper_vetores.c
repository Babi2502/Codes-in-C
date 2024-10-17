// operações com vetores 

#include <stdio.h>

main()
{
	const int N=4; // N inteiro - constante não pode ser modificada
	int a[N], b[N], s[N];
	
	printf("operção com vetores \n\n");
	
	//inserção do vetor A
	for (int i=0; i<N; i++)
	{
		printf("incira o elemento A[%d]:",i); //vetor A sendo alimentado
		scanf("%d", &a[i]);
	}
	
	//incerir o vetor B
	for (int i=0; i<N; i++)
	{
		printf("incira o elemento B[%d]:",i); //vetor B sendo alimentado
		scanf("%d", &b[i]);
	}
	
	// soma dos vetores A e B:
	for(int i=0; i<N; i++)
	{
		
	}
} // fim do main