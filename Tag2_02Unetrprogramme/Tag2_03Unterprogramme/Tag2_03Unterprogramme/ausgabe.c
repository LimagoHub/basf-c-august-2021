#include <stdio.h>
#include "ausgabe.h"

static int quatsch = 0;

void ausgabe(char * wert)
{
	printf("Hallo ");
	printf("%s \n", wert);
	
}

int summe(int a, int b)
{
	int ergebnis = a + b;
	return ergebnis + quatsch;
}

// Viele andere Funktionen
