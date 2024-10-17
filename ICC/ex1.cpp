#include <stdio.h>
#include <stdlib.h>
int main()
{
	float N1, N2, soma, sub, pord, quoci;
	printf("digite 2 numeros \n");
	scanf("%f %f",&N1,&N2);
	soma = N1 + N2;
	sub = N1 - N2;
	pord = N1 * N2;
	quoci = N1 / N2;
	printf("N1 = %.2f  N2 = %.2f \n", N1, N2);
	printf("soma = %.2f \n", soma);
	printf("subitracao = %.2f \n", sub);
	printf("produto = %.2f \n", pord);
	printf("quociente = %.2f \n", quoci);
	system("pause");
	return 0;
}
