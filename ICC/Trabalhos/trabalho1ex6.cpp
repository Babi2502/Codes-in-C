#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char nome[10];
  strcpy(nome, "Fulano");
  //string de destino � nome
  //string de origem � "Fulano"
  printf("Nome = %s", nome);
}
