#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char nome[61];
  char rua[10];
  printf("digite o nome da sua rua \n");
  scanf("%s",nome);
  strncpy(rua, nome, 10);
  rua[10]='\0';
  printf("rua = %s \n",rua);
}
