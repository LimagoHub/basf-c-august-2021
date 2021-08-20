#include <stdio.h>
#include "Nimmspiel.h"
#define TRUE 1
#define FALSE 0

static int stones = 23;
// DRY Don't repeat yourself

void play()
{
	while( ! isGameover())
	{
		humanTurn();
		computerTurn();
	}
}

int isGameover()
{
	return stones < 1;
}




void humanTurn()
{
	int turn;
	if (isGameover()) return;

	
	while(TRUE)
	{
		printf("Es gibt %d Steine. Bitte nehmen Sie 1,2 oder 3.\n", stones);
		scanf_s("%d", &turn);
		if (isValidTurn(turn)) break;
		printf("Ungueltiger Zug\n");
	}
	stones -= turn;
	checkLosing("Mensch");
}

void computerTurn()
{
	if (isGameover()) return;
	int possibleTurns[] = { 3,1,1,2 };
	int turn = possibleTurns[stones % 4];
	printf("Computer nimmt %d Steine.\n", turn);
	stones -= turn;
	checkLosing("Computer");
	
}

void checkLosing(char* name)
{
	if (isGameover())
	{
		printf("%s\n", name);
	}
}

int isValidTurn(int turn)
{
	return turn >= 1 && turn <= 3;
}

