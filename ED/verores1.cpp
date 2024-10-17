/*
construção de vetores unidimencionais (listas)
*/

#include <stdio.h>

main()
{
	int n[5]; // vetor n de inteiros com 5 posiçoes
	
	// ocupaçao em memoria 
	printf("\n 5 inteiros = %d bytes", sizeof(int)*5);
	
	//preenchimento 
	// modo 1 direto
	float x[] = {0.1, -3.19, 9.3, 27.9, -0.002, 1587234.87642};
	printf("\n Vetor x: ");
	for (int i=0; i<6; i++)
		printf("\t%.3f", x[i]);

	printf("\n\n Vetor n:");
	for(int i=0; i<5; i++)
	{
		n[i] = i*i; // n = i²
		printf("\t%d", n[i]);
	}	
} //main