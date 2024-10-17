// ex 18

#include <stdio.h>		
#include <conio.h>		
#include <stdlib.h>  	

struct ARVORE {   
	int idade;	  
	float altura;
	float peso;   
	struct ARVORE *esq, *dir;	 
};

struct ARVORE* inserir(struct ARVORE *aux, int idade, float altura, float peso) 
{
	if (aux == NULL) 
	{
		aux = (struct ARVORE*) malloc(sizeof(struct ARVORE));
		aux->idade = idade;
		aux->altura = altura;
		aux->peso = peso;
		aux->esq = NULL;
		aux->dir = NULL;
	}
	else if (idade < aux->idade)
			aux->esq = inserir(aux->esq, idade, altura, peso);
		else
			aux->dir = inserir(aux->dir, idade, altura, peso);
	return aux;
}

int consultar(struct ARVORE *aux, int idade, float altura, float peso, int achou) 
{
	if (aux != NULL && achou == 0) 
	{
		if (aux->idade == idade) 
		{
			achou = 1;
			printf("\nIdade: %d, Ender: %d", aux->idade, aux); 
			printf("\nAltura: %.2f, Ender: %d", aux->altura, aux); 
			printf("\nPeso: %.2f, Ender: %d", aux->peso, aux); 
		}
		else if (idade < aux->idade) 
			{
				achou = consultar(aux->esq, idade, altura, peso, achou);
				printf("\nIdade: %d, Ender: %d", aux->idade, aux);
				printf("\nAltura: %.2f, Ender: %d", aux->altura, aux); 
				printf("\nPeso: %.2f, Ender: %d", aux->peso, aux);  
			}
			else 
			{
				achou = consultar(aux->dir, idade, altura, peso, achou);
				printf("\nIdade: %d, Ender: %d", aux->idade, aux); 
				printf("\nAltura: %.2f, Ender: %d", aux->altura, aux); 
				printf("\nPeso: %.2f, Ender: %d", aux->peso, aux); 
			}
	}
	return achou;
}

void mostrarEmOrdem(struct ARVORE *aux) 
{
	if (aux != NULL) 
	{
		mostrarEmOrdem(aux->esq);
		printf("\t%d", aux->idade);
		mostrarEmOrdem(aux->dir);
	}
}

void mostrarPreOrdem(struct ARVORE *aux) 
{
	if (aux != NULL) 
	{
		printf("\t%d", aux->idade);
		mostrarPreOrdem(aux->esq);
		mostrarPreOrdem(aux->dir);
	}
}

void mostrarPosOrdem(struct ARVORE *aux) 
{
	if (aux != NULL) 
	{
		mostrarPosOrdem(aux->esq);
		mostrarPosOrdem(aux->dir);
		printf("\t%d", aux->idade);
	}
}

struct ARVORE* remover(struct ARVORE *aux, int idade) 
{
	struct ARVORE *p, *p2;
	
	if (aux->idade == idade) 
	{
		if (aux->esq == aux->dir) 
		{
			free(aux);
			return NULL;
		}
		else if (aux->esq == NULL)  
		{
			p = aux->dir;
			free(aux);
			return p;
		}
		else if (aux->dir == NULL)  
		{
			p = aux->esq;
			free(aux);
			return p;
		}
		else 
		{
			p2 = aux->dir;
			p = aux->dir;
			while (p->esq != NULL)
				p = p->esq;
			p->esq = aux->esq;
			free(aux);
			return p2;
		}
	}
	else if (aux->idade < idade)
		aux->dir = remover(aux->dir, idade);
	else
		aux->esq = remover(aux->esq, idade);
	return aux;
}
	
struct ARVORE* desalocar(struct ARVORE *aux) 
{
	if(aux!=NULL) 
	{
		aux->esq = desalocar(aux->esq);
		aux->dir = desalocar(aux->dir);
		free(aux);
	}
	return NULL;
}

void exibirArvore(struct ARVORE *aux) 
{
	if (aux != NULL) 
	{
		printf("Idade: %d, Altura: %.2f, Peso: %.2f", aux->idade, aux->altura, aux->peso);
		printf("(");
		exibirArvore(aux->esq);		 
		exibirArvore(aux->dir);
		printf(")");
	}
}

void main() 
{
	struct ARVORE *raiz = NULL;
	struct ARVORE *aux;
	int op, achou, idade;
	float altura, peso;
	
	do 
	{
		printf("\nMENU DE OPCOES\n");
		printf("\n1. Inserir na arvore");
		printf("\n2. Consultar um no da arvore");
		printf("\n3. Consultar toda a arvore em ordem");
		printf("\n4. Consultar toda a arvore em pre-ordem");
		printf("\n5. Consultar toda a arvore em pos-ordem");
		printf("\n6. Excluir um no da arvore");
		printf("\n7. Esvaziar a arvore");
		printf("\n8. Sair");
		printf("\nDigite sua opcao: ");
		scanf("%d", &op);

		if (op < 1 || op > 8)
			printf("\nopcao invalida!!");
			
		else if (op == 1) //Inserir na arvore
		{ 
			printf("\nDigite o idade a ser inserido na arvore: ");
			scanf("%d", &idade);
			printf("\nDigite a altura a ser inserido na arvore: ");
			scanf("%f", &altura);
			printf("\nDigite o peso a ser inserido na arvore: ");
			scanf("%f", &peso);
			raiz = inserir(raiz, idade, altura, peso);
			printf("\nidade, altura e peso inserido na arvore");
		}
		else if (op == 2) //Consultar um no da arvore
		{ 
			if (raiz == NULL) 
				printf("\narvore vazia");
			else
			{
				printf("\nDigite o idade a ser consultado: ");
				scanf("%d", &idade);
				achou = 0;
				achou = consultar(raiz,idade, altura, peso ,achou);
				if (achou == 0)
					printf("\nidade nao encontrado na arvore");
				else
					printf("\nidade encontrado");
			}
		}
		else if (op == 3) //Consultar toda a arvore em ordem
		{ 
			if (raiz == NULL)
				printf("\nArvore vazia!");
			else 
			{
				printf("\nListando todos os idades da arvore em ordem: ");
				mostrarEmOrdem(raiz);
			}
		}
		else if (op == 4) //Consultar toda a arvore em pre-ordem 
		{ 
			if (raiz == NULL)
				printf("\nArvore vazia!");
			else 
			{
				printf("\nListando todos os idades da arvore em pre-ordem: ");
				mostrarPreOrdem(raiz);
			}
		}
		else if (op == 5) //Consultar toda a arvore em pos-ordem
		{ 
			if (raiz == NULL)
				printf("\nArvore vazia!!");
			else 
			{
				printf("\nListando todos os idades da arvore em pos-ordem: ");
				aux = raiz;
				mostrarPosOrdem(aux);
			}
		}
		else if (op == 6) //Excluir um no da arvore
		{ 
			if (raiz == NULL)
				printf("\narvore vazia!");
			else 
			{
				printf("\nDigite o idade que deseja exc1uir: ");
				scanf("%d", &idade);
				achou = 0;
				achou = consultar(raiz,idade, altura, peso,achou);
				if (achou == 0)
					printf("\nidade nao encontrado na arvore ...");
				else 
				{
					raiz = remover(raiz,idade);
					printf("\nidade excluido da arvore");
				}
			}
		}
		else if (op == 7)  //Esvaziar a arvore
		{ 
			if (raiz == NULL)
				printf("\nArvore vazia!!");
			else 
			{
				raiz = desalocar(raiz);
				printf("\nArvore esvaziada");
			}
		}
		printf("\n");
		exibirArvore(raiz);
		printf("\nAperte tecla: "); getch();
		
	} while (op != 8);
} 