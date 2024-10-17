#include <stdio.h>
#include <stdlib.h>
int main()
{
	float Y,x,y;
	int num;
	Y=0;
	x=1;
	y=1;
	for(num=1;num<=50;num++)
	{
		Y=Y+x/y;
		x=x+2;
		y=y+1;
	}
	printf("Y = %f \n",Y);
	system("pause");
	return 0;
}
