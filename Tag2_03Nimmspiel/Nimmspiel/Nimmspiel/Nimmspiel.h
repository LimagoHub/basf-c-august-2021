#pragma once

void play(); // Interface Function (einzige �ffentliche Funktion)
static int isGameover();
static void humanTurn();
static void computerTurn();
static int isValidTurn(int turn);
static void checkLosing(char *name);