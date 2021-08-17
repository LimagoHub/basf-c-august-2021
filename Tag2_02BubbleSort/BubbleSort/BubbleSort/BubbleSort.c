// BubbleSort.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

int main()
{
	int feld[] = { 17,3,25,99,73,11 };
	
	/*for (int i = 0; i < sizeof(feld) / sizeof(int); i++)
	{
		for(int j = 0; j < i - 1; j++)
		{
			if(feld[j] > feld[j+1])
			{
				int temp = feld[j];
				feld[j] = feld[j + 1];
				feld[j + 1] = temp;
			}
		}
	}

	
	*/

	int letzeDrehPosition = sizeof(feld) / sizeof(int);
	

	while(letzeDrehPosition)
	{
		int aktuelleDrehposition = 0;
		for (int  i= 0; i < letzeDrehPosition -1 ; i++)
		{
			if (feld[i] > feld[i + 1])
			{
				int temp = feld[i];
				feld[i] = feld[i+1];
				feld[i+1] = temp;
				aktuelleDrehposition = i+1;
			}
		}
		letzeDrehPosition = aktuelleDrehposition;
	}
	for (int i = 0; i < sizeof(feld) / sizeof(int); i++)
	{
		printf("%d\n", feld[i]);
	}
	
}

