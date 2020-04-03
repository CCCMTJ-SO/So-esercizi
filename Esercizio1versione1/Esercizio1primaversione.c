
#include <stdio.h>

int main() {
	printf("Ciao! \n Digita il primo numero intero:");

	int primo = 0;

	int secondo = 0;
	int errore = 1;
	errore = scanf("%d", &primo);
	if (errore == 0){ printf("Non è stato digitato un numero intero!"); return 0;}

	printf("Digita il secondo numero intero:");

	errore = scanf("%d", &secondo);
	if (errore == 0){ printf("Non è stato digitato un numero intero!"); return 0;}

	printf(" \n");

	printf(" Digita l'operazione che vuoi eseguire: (+,-,*,/)");

	printf(" \n");

	char op = '+';

	scanf(" %c", &op);

	     if (op == '+')
	{printf(" La somma di %d + %d è uguale a = %d", primo, secondo,primo + secondo);}

	else if (op == '-')
	{printf(" La differenza di %d - %d è uguale a = %d", primo, secondo,primo - secondo);}

	else if (op == '*')
	{printf(" La moltiplicazione di %d * %d è uguale a = %d", primo, secondo,primo * secondo);}

	else if (op == '/')
	{
		if (secondo == 0) { printf("Errore! Non è possibile fare una divisione per 0!!"); return 0;}
    printf(" La divisione di %d / %d è uguale a = %d", primo, secondo,primo / secondo);}

	else {printf("Operazione errata");}

	return 0;
}

