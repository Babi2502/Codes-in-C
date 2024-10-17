#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char nome[10];
  strcpy(nome, "Fulano");
  //string de destino é nome
  //string de origem é "Fulano"
  printf("Nome = %s", nome);
}
