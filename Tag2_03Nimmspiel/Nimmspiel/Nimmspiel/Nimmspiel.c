#include <stdio.h>
#include "Nimmspiel.h"
#define TRUE 1
#define FALSE 0

static int stones = 23;
static int gameover = FALSE;

void play()
{
	while( ! gameover)
	{
		humanTurn();
		computerTurn();
	}
}

void humanTurn()
{
	printf("Spielerzug \n");
}

void computerTurn()
{
	printf("Computerzug \n");
}

