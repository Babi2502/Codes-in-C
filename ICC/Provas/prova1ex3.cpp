#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,f,a,t,x;
	for(i=0;i<=9;i++)
	{
		for(f=0;f<=9;f++)
		{
			for(a=0;a<=9;a++)
			{
				for(t=0;t<=9;t++)
				{
					x=(i*10+f)*(a*10+t);
					if(x==f*1000+i*100+a*10+t)
					{
						printf("%d %d %d %d %d \n",f,i,a,t,x);
					}
				}
			}
		}
	}
}
