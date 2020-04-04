#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int array[], unsigned int x, unsigned int y)
	{
	int temp = array[x];
	array[x] = array[y];
	array[y] = temp;
	}

void bubble_sort(int array[],unsigned int dim)
	{
	if (dim == 1) return;
		for(int i = 0; i < dim-1; i++)
		{
			if ( array[i] > array[i+1])
			{
			swap(array,i,i+1);
			}
		}
	if (dim >= 1){bubble_sort(array,dim-1);}

	}

void stampa_array(int array[],unsigned int dim)
	{
		printf("Indice: ");
		for(int i = 0; i < dim;i++)
			{
			printf("%d",i);
			int c = array[i];
			do {printf(" "); c = c/10;}
			while (c >=  1);
			}
		printf("\n");
		printf("Valori: ");
		for(int i = 0; i < dim;i++)
			{
			printf("%d ",array[i]);
			}
	printf("\n\n");

	}

void insertion_sort(int array[],unsigned int dim)
	{
	int j = 0;
		for(int i = 1; i < dim;i++)
		{
			while( j < i)
			{
			if (array[j] > array[i]) swap(array,j,i);
			j++;
			}
		j = 0;
		}



	}
int main()
	{

	printf("Quanto è lungo l'array?\n");

	int error = 1;
	unsigned int dim = 0;

	error = scanf("%u",&dim);
	if (error == 0){ printf("Dimensione non valida!"); return 0;}

	int array[dim];

			printf("Inserisci i valori dell'array!\n");

			for(int i = 0; i < dim;i++)

				{
				int valore = 0;
				error = scanf("%d",&valore);
				if (error == 0){ printf("Valore non valido!"); return 0;}
				array[i] = valore;

				}

			printf("Ecco l'array: \n");
			stampa_array(array,dim);

			int array2[dim];
			memcpy(array2,array,dim*sizeof(int));

			printf("Ecco l'array ordinato con bubble sort: \n");
			bubble_sort(array,dim);
			stampa_array(array,dim);

			printf("Ecco l'array ordinato con insertion sort: \n");
			insertion_sort(array2,dim);
			stampa_array(array2,dim);



	return 0;
	}
