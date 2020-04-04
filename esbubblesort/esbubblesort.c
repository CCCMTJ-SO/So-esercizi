#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int* array,unsigned int dim)
{
if (dim == 1) return;
	for(int i = 0; i < dim-1; i++)
	{
	if ( array[i] > array[i+1])
		{
		 int temp = array[i];
         array[i] = array[i+1];
	     array[i+1] = temp;
		}
	}
if (dim >= 1){bubble_sort(array,dim-1);}

}

void stampa_array(int* array,unsigned int dim)
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

			printf("Ecco l'array ordinato: \n");
			bubble_sort(array,dim);
			stampa_array(array,dim);

return 0;
}
