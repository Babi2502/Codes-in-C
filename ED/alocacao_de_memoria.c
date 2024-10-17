// alocação estatica de vetores na memoria 

#include <stdio.h>

main()
{
	// vetores - ocupação estatica na memoria 
	int V[1000];
	
	// mostrando o tamanho e o endereço de V
	printf("\nV: %d bytes \t em %d\n", sizeof(V), &V); // & é o endereço da variavel 
	
	// tamanho e endereço dos "pedaços" do vetor V
	printf("\nV[0]: %d bytes \t em %d\n", sizeof(V[0]), &V[0]);
	printf("V[1]: %d bytes \t em %d\n", sizeof(V[1]), &V[1]);
	printf("V[2]: %d bytes \t em %d\n", sizeof(V[2]), &V[2]);
	printf("V[1000]: %d bytes \t em %d\n", sizeof(V[1000]), &V[1000]);
	printf("\n");
	// nota-se que o endereço de um vetor é dado pelo endereço do seu primeiro elemento =V[0]
	
}// fim do main