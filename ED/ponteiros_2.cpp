/* ponteiros - introdução 

ponteiro é um tipo de dado que serve para indicar, ou armazenar, um endereço de memoria 
um ponteiro não é um int, é um tipo que armazena o endereço em que o int esta alocado
um ponteiro não é um float ou double, é um tipo de dado que armazena o endereço
um ponteiro não é um char, é um tipo de dado que armazena o endereço */

#include <stdio.h>
#include <conio.h> // getch()

main()
{
	// ponteiros e relação com as variaveis que eles "apontam"
	int N, *pN;
	float *px, x;
	char tecla;
	
	pN = &N; // o ponteriro pN (definido por *) recebe o endereço de N
	px = &x;
	
	printf("endereco da variavel 'N': %d\n", &N);
	printf("endereco armazenado no ponteiro 'pN': %d\n", pN);
	printf("valor da variavel definida pelo ponteiro 'pN': %d \n\n", *pN); // lixo, pois o valor não foi atribuido, só o endereço
	
	printf("endereco da variavel 'x': %d\n", &x);
	printf("endereco armazenado no ponteiro 'px': %d\n", px);
	printf("valor da variavel definida pelo ponteiro 'px': %d \n\n", *px); // lixo, pois o valor não foi atribuido, só o endereço
	
	printf("apertar uma tecla para continuar:");
	tecla = getch(); // substitui melhor o famigerado system("pause");
	printf("\n\n");
	
	N = -12;
	x = 0.0645;
	
	printf("endereco da variavel 'N': %d\n", &N);
	printf("endereco armazenado no ponteiro 'pN': %d\n", pN);
	printf("valor da variavel definida pelo ponteiro 'pN': %d \n\n", *pN); // não mais lixo, pois o valor foi atribuido e o endereço
	
	printf("endereco da variavel 'x': %d\n", &x);
	printf("endereco armazenado no ponteiro 'px': %d\n", px);
	printf("valor da variavel definida pelo ponteiro 'px': %f \n\n", *px); // não mais lixo, pois o valor foi atribuido e o endereço
	
	printf("\nanulado (desalocando) os ponteiros \n");
	pN = NULL, px = NULL;
	printf("endereco armazenado no ponteiro 'pN': %d\n", pN);
	printf("endereco armazenado no ponteiro 'px': %d\n", px);
	printf("endereco da variavel 'N': %d\n", &N);
	printf("endereco da variavel 'x': %d\n", &x);
	
}// fim main