#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char nome[10];
  printf("digite seu nome \n");
  gets(nome);
  strcat(nome, "  brasibeiro");
  printf("%s \n",nome);
}
