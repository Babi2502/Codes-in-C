#include <stdio.h> // biblioteca de entrada e de saida 
#include <limits.h> // variaveis definidas internamentes 

main() // função principal
{
      // 5 tipos de variaveis em c
      int inteiro;
      float decimal;
      double duplaprecis;
      char caracter;
      void vazia(); // so para funções q nao retornam nada 
      // nao existe o tipo bool true / false 
      
      // mostrar o tamaho ocupado na mamoria - função sizeof()
      printf("\Tamanhos de int: %d bytes\n", sizeof(inteiro));
      printf("Tamanho de float: %d bytes\n", sizeof(decimal));
      printf("Tamnaho de double: %d bytes\n", sizeof(duplaprecis));
      printf("Tamanho de char: %d bytes\n", sizeof(caracter));
      printf("Tamanho de void: %d bytes\n", sizeof(vazia()));
      
      //alcances (range)
      printf("\nAlcances por tipo:");
      printf("\nMenor valor de int = %d", INT_MIN); // -2^31
      printf("\nMaior valor de int = %d", INT_MAX); // 2^31 -1
      printf("\nMenor valor de char = %d", SCHAR_MIN); // -2^7
      printf("\nMaior valor de char = %d", SCHAR_MAX); // 2^7 -1
      //printf("\nMenor valor de float = %d", FLT_MIN); // -2^16
      //printf("\nMenor valor de float = %d", FLT_MAX); // 2^27
}
