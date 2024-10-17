// manipulação de cadeias de caracteres (string)

#include <stdio.h>
#include <string.h>
main()
{
	// string = cadeia de caracteres 
	printf("\n\n");
	char nome[10]; // vetor de caracteres ou uma strisng
	// nome[10] = "barbara"; // problema ou armadilha
	// nome = "barbara"; // problema ou armadinha 
	strcpy(nome,"barbara"); // string copy da biblioteca string.h
	printf("%s\n", nome); // %s para mostrar string
	
	//outras formas de atribuir um string a variaveis
	char cidade[] = "sorocaba";
	printf("%s\n", cidade);
	
	char estado[11] = "sao paulo";
	printf("%s\n", estado);
	
	char saudacao[4] = {'a','1','o','\0'}; //como c armazena strings
	printf("%s\n",saudacao);
	
	printf("%c\n", 65); // formata como caracter
	printf("%c\n", 'A');
	// printf("%s\n", 'A'); // pq n é string e n mostrou nada aqui?
	printf("%c %c %c %c %c %c %c", 66,65,82,66,65,82,65); 
} // fim do main