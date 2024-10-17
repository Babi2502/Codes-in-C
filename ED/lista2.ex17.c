// Ex 17:
#include <stdio.h>
#include <conio.h>

struct pessoa {
	char nome[40];
	int idade;
	float peso;
} lista_pessoas[59];

void swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

void printArray(int arr[], int ini, int fim)
{
	for (int i = ini; i < fim; i++)
		printf("%d\t", arr[i]);
	printf("\n");
}

int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; 
	int i = (low-1);
	for (int j = low; j <= high-1; j++)
	{
		if (arr[j] < pivot)
		{
			i++; 
			swap(&arr[i], &arr[j]);
		}
	}
	
	swap(&arr[i+1], &arr[high]);
	return (i+1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int part_idx = partition(arr, low, high);
		quickSort(arr, low, part_idx-1);
		quickSort(arr, part_idx+1, high);
	}
}

int main()
{
	char Nome[40];	
	float Peso;		
	int pos, N, a;  
	
	printf("Insira o numero de pessoas: ");
	scanf("%d", &N);
	
	int arr[N];
	
	for(pos=0; pos < N; pos++) 
	{			
		printf("\nInforme o nome da pessoa %d: ", pos+1);
		scanf("%s", &lista_pessoas[pos].nome);
		printf("Informe a idade da pessoa %d: ", pos+1);
		scanf("%d", &lista_pessoas[pos].idade);
		printf("Informe o peso  da pessoa %d: ", pos+1);
		scanf("%f", &lista_pessoas[pos].peso);
	}
	for(a=0; a<N; a++)
	{
		arr[a] = lista_pessoas[a].peso;
	}
	
	int n = sizeof(arr) / sizeof(arr[0]);
		printf("\nLista inicial: \t");
		printArray(arr, 0, n);
	quickSort(arr, 0, n-1);
		printf("\nLista final: \t");
		printArray(arr, 0, n);
	getch();
	return 0;
}
