#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcpy(destination, source)

typedef struct
{
	char name[31];
	int gewicht;
	
} Schwein;



typedef struct 
{
	double x;
	double y;
} Punkt ;


int main(const int argc, const char ** argv, const char ** env)
{
	int anzahl;
	printf("Bitte geben Sie die Anzahl der Punkte ein: ");
	scanf_s("%d", &anzahl);


	Schwein **stall;
	stall = malloc(anzahl * sizeof(Schwein*));

	for (int i = 0; i < anzahl; i++)
	{
		Schwein* schwein;
		schwein = malloc(sizeof(Schwein));

		printf("Biite geben Sie dem Schwein Nr. %d einen Namen: ", i);
		scanf_s("%s", schwein->name,30);
		schwein->gewicht = 10;
		stall[i] = schwein;
	}

	for (int i = 0; i < anzahl; i++)
	{
		printf("%s\n", stall[i]->name);
		printf("%d\n", stall[i]->gewicht);
	}

	for (int i = 0; i < anzahl; i++)
	{
		free(stall[i]);
		stall[i] = NULL;
	}

	free(stall);

	
	//Punkt** punkte; // Nirvana (undefiniert)
	//punkte = malloc(sizeof(Punkt*) * anzahl);

	//for (int i = 0; i < anzahl; i++)
	//{
	//	Punkt* punkt;
	//	punkt = malloc(sizeof(Punkt));
	//	punkt->x = i;
	//	punkt->y = i;
	//	punkte[i] = punkt;
	//}

	//for (int i = 0; i < anzahl; i++)
	//{
	//	printf("%lf\n", punkte[i]->x);
	//	printf("%lf\n", punkte[i]->y);
	//}

	//for (int i = 0; i < anzahl; i++)
	//{
	//	free(punkte[i]);
	//	punkte[i] = NULL;
	//}

	//free(punkte);
}

