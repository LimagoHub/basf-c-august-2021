// DiverseZeiger.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

typedef struct
{
	char name[31];
	int gewicht;

} Schwein;



typedef struct
{
	double x;
	double y;
} Punkt;

int main()
{
	char c = 65; // 1 Byte
	//char c = 'A';
	int i = 1145258561;

	short a = 65+256*67;
	
	char *cptr;
	short* sptr;
	int* iptr;
	double* dptr;
	void* vptr;
	

	iptr = &i;
	iptr++;
	
	printf("%d \n",*iptr);

	Schwein* piggy = malloc(sizeof(Schwein));
	Punkt* p = malloc(sizeof(Punkt));

	void* universalPointer = piggy;

	void *universalPointerFeld[2];

	universalPointerFeld[0] = piggy;
	universalPointerFeld[1] = p;
	
	piggy = (Schwein *) universalPointerFeld[0];
	p = (Punkt *)universalPointerFeld[1];

	
}


