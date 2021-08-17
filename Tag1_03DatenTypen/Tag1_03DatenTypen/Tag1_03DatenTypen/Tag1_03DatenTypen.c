// Tag1_03DatenTypen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

int main()
{
	unsigned short a = 1000;
	unsigned short b = 1;

	unsigned int ergebnis = 0;

	if(b < a) // Dreieckstausch
	{
		unsigned short temp = a;
		a = b;
		b = temp;
		
	}

	for(int i = 0 ; i < a; i++)
	{
		ergebnis += b;
	}
	
	printf("Ergenis = %d", ergebnis);
	
}


