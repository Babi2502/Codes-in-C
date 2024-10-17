#include <stdio.h>
#include <stdlib.h>
int main()
{
	int v[5], aux, d, i, z, c;

	d = 5;

	for (i=0; i<d; i++)
	  {
		printf("Informe num %d: ", (i+1));
		scanf("%d", &v[i] );
	  }
	
	for (z=0; z < (d-1); z++)
	  {
		 for (c = (z+1); c < d; c++)
			{
				if ( v[z] > v[c] )
					{
					aux = v[z];
					v[z] = v[c];
					v[c] = aux;
					}
			}
		}

	for (i=0; i<d; i++)
	  {
		printf("     %d     ", v[i] );
	  } 
}
