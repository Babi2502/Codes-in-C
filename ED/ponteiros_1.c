/* ponteiros - introdução 

ponteiro é um tipo de dado que serve para indicar, ou armazenar, um endereço de memoria 
um ponteiro não é um int, é um tipo que armazena o endereço em que o int esta alocado
um ponteiro não é um float ou double, é um tipo de dado que armazena o endereço
um ponteiro não é um char, é um tipo de dado que armazena o endereço */

#include <stdio.h>
#include <conio.h> // getch()

main()
{
	int n1 = 0, n2 =10;
	char L1 = 'a', L2 ='c', tecla;
	
	printf("n1: \t");
	printf("valor: %d\t", n1);
	printf("endereco na memoria: %d\n", &n1);
	
	printf("n2: \t");
	printf("valor: %d\t", n2);
	printf("endereco na memoria: %d\n", &n2);
	
	printf("L1: \t");
	printf("valor: %c\t", L1);
	printf("endereco na memoria: %d\n", &L1);
	
	printf("L2: \t");
	printf("valor: %c\t", L2);
	printf("endereco na memoria: %d\n", &L2);
	
	printf("\napertar uma tecla para continuar:");
	tecla = getch(); // substitui melhor o famigerado system("pause");
	printf("\n\n");
	
	printf("alterando os valores...\n");
	n1=2112, n2=999;
	L1='A', L2='B';
	
	printf("n1: \t");
	printf("valor: %d\t", n1);
	printf("endereco na memoria: %d\n", &n1);
	
	printf("n2: \t");
	printf("valor: %d\t", n2);
	printf("endereco na memoria: %d\n", &n2);
	
	printf("L1: \t");
	printf("valor: %c\t", L1);
	printf("endereco na memoria: %d\n", &L1);
	
	printf("L2: \t");
	printf("valor: %c\t", L2);
	printf("endereco na memoria: %d\n", &L2);
	
}// fim do main