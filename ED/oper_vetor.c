// operações com vetores 

#include <stdio.h>
//#define PI 3.1416 // definição de variavl 
main()
{
	const float PI=3.1416; // ou assim ou no de cima 
	const int N=3; // N inteiro - constante não pode ser modificada
	int a[N], b[N], s[N], c, asc;
	
	printf("operção com vetores \n\n");
	
	//inserção do vetor A
	for (int i=0; i<N; i++)
	{
		asc = i + 120;
		printf("Incira o elemento A[%c]:", asc); //vetor A sendo alimentado
		scanf("%d", &a[i]);
	}
	
	//incerir o vetor B
	printf("\n\n");
	for (int i=0; i<N; i++)
	{
		asc = i + 120;
		printf("Incira o elemento B[%c]:", asc); //vetor B sendo alimentado
		scanf("%d", &b[i]);
	}
	
	// soma dos vetores A e B:
	printf("\n");
	for(int i=0; i<N; i++)
	{
		asc = i + 120;
		s[i] = a[i] + b[i];
		printf("s[%c] = %d\t", asc, s[i]);
	}
	
	// produto escalar //c = a.b --> a,b vetores, c é uma escalar
	c = 0;
	// dessa maneira c = a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
	for (int i=0; i<N; i++) // ou assim 
	{
		c = c + a[i]*b[i]; // soma cumulativa
	}
	printf("\nc=%d", c);
} // fim do main