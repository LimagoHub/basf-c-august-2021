// Lotto.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	srand(time(NULL));
    int lottozahlen[49];

	for(int index = 0; index < 49; index++)
	{
		lottozahlen[index] = index + 1;
	}

	for(int index = 0 ; index < 500; index ++)
	{
		int firstIndex = rand() % 49;
		int secondIndex = rand() % 49;
		int temp = lottozahlen[firstIndex];
		lottozahlen[firstIndex] = lottozahlen[secondIndex];
		lottozahlen[secondIndex] = temp;
	}

	for (int index = 0; index < 6; index++)
	{
		printf("%d. Glueckszahl lautet %d.\n", index + 1,lottozahlen[index] );
	}
}


