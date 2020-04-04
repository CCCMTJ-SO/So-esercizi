#include <stdio.h>
#include <stdlib.h>

void stampa_array(char* array,unsigned int dim)
	{
		printf("Valori: ");
		for(int i = 0; i < dim;i++)
			{
			printf("%c ",array[i]);
			}
	printf("\n\n");

	}

char* concat_array(char array1[], unsigned int dim1,char array2[],unsigned int dim2)
	{
	unsigned int dim = dim1 + dim2;
	char* result = malloc(sizeof(char)*dim);
	if (result == NULL) { perror("Malloc ha restituito errore!"); return NULL;}
	for(int i = 0; i < dim; i++)
	{
		if (i < dim1) { result[i] = array1[i];}
		else {result[i] = array2[i - dim1];}
	}
	return result;

	}

char* costruisci_array(unsigned int dim)
	{

	char* array = malloc(sizeof(char)*dim);
	if (array == NULL) { perror("Malloc ha restituito errore!"); return NULL;}
	int error = 0;
			printf("Inserisci i valori dell'array!\n");

			for(int i = 0; i < dim;i++)

				{
				char valore = 0;
				error = scanf(" %c",&valore);
				if (error == 0){ printf("Valore non valido!"); return 0;}
				array[i] = valore;
				}
	return array;
	}

int main()
	{
	printf("Ciao, inserisci i dati riguardo il primo array:\n");
	printf("Quanto è lungo l'array?\n");
	int error = 1;
    unsigned int dim1 = 0;
	error = scanf("%u",&dim1);
	if (error == 0){ printf("Dimensione non valida!"); return 0;}

	char* primo_array = costruisci_array(dim1);
	stampa_array(primo_array,dim1);
	printf("Inserisci i dati riguardo il secondo array:\n");
	printf("Quanto è lungo l'array?\n");
    unsigned int dim2 = 0;
	error = scanf("%u",&dim2);
	if (error == 0){ printf("Dimensione non valida!"); return 0 ;}

	char* secondo_array = costruisci_array(dim2);
	stampa_array(secondo_array,dim2);

	printf("Concateno i due array!\nEcco il risultato: \n");

	char* result;
	result = concat_array(primo_array,dim1,secondo_array,dim2);
	stampa_array(result, dim1 + dim2);



	}
