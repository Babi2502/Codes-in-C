#include <stdio.h>
#include <stdlib.h>
int main()
{
	float ha,hf;
	int ano;
	ha=1.5;
	hf=1.1;
	ano=0;
	while(hf<=ha)
	{
		ha=ha+0.02;
		hf=hf+0.03;
		ano=ano+1;
	}
	printf("altura do felisberto = %.2f m \n",hf);
	printf("altura do anacleto = %.2f m \n",ha);
	printf("anos decorridos = %d \n",ano);
	system("pause");
	return 0;
}
