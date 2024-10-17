#include <stdio.h>
#include <stdlib.h>
int main()
{
    char caractere;
    char letra;
    printf("digite 2 letras \n");
    scanf("%c %c",&caractere,&letra);
    if(caractere < letra)
    {
    	printf("%c is smaller than %c.",caractere,letra);
	}
    if(caractere > letra)
    {
    	printf("%c is smaller than %c.",letra,caractere);
	}
    if(caractere == letra)
    {
    	 printf("%c is equal to %c.",caractere,letra);
	}
}
