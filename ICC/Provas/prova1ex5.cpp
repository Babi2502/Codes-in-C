#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, k; //estas são as variáveis controladoras dos for’s
    for(i=1;i<=3;i++)  //  PRIMEIRO for
   {
        for (k=1;k<=5;k++)  // SEGUNDO for
          {
              for (j=1;j<=k;j++)  //TERCEIRO for
                 {
                     printf(" %d ", j);
                  } // fim do for

	      printf("\n");
          } // fim do for

        printf("\n");
        printf("\n");
   } // fim do for
}
