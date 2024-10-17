#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char nome[10];
  char rua[61];
  int retorno;
  printf("digite 2 palavras \n");
  gets(nome);
  gets(rua);
  retorno = strncmp(nome,rua,5);
  printf("retorno = %d \n", retorno);
}

