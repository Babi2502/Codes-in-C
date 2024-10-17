#include <stdio.h>
#include <stdlib.h>
int main()
{
	float A,h,B;
	printf("digite a base e a altura do triangulo \n");
	scanf("%f %f",&B,&h);
	A=B*h/2;
	printf("base = %.2f m \t altura = %.2f m \n",B,h);
	printf("area = %.2f m^2 \n",A);
	system("pause");
	return 0;
}
