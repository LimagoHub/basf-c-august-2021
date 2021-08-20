// Structures.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

#include "Schwein.h"





int main()
{
	Schwein piggy;
	schwein_init(&piggy);
	
	schwein_ausgabe(&piggy);

	Schwein babe = {"Babe", 20};

	schwein_ausgabe(&babe);
	
	
	printf("Size of piggy = %d\n", sizeof(piggy));
}




