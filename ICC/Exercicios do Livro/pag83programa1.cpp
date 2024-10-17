#include <stdio.h>
#include <stdlib.h>
int main()
{
	float media[9],mc,ms,x;
	int i;
	x=0; ms=0;
	for(i=0;i<10;i++)
	{
		printf("digite a media do aluno \n",i);
		scanf("%f",&media[i]);
		x=x+media[i];
	}
	mc=x/10;
	for(i=0;i<10;i++)
	{
		if(media[i]>=mc)
		{
			ms=ms+1;
		}
	}
	printf("media da classe = %.2f \n",mc);
	printf("numero de alunos com media > ou = a media da classe = %.0f \n",ms);
	for(i=0;i<10;i++)
	{
		printf("media do aluno = %.2f \n",media[i]);
	}
	system("pause");
	return 0;
}


