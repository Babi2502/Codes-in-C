#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char nome[10];
  char rua[60];
  printf("escreva sue nome e sua rua \n");
  gets(nome);
  gets(rua);
  strncat(nome,rua,30);
  printf("%s \n",nome);
}
