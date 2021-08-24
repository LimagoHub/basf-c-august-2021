#include <stdio.h>
#include <string.h>
#include "liste.h"


typedef struct kettenglied
{
	struct kettenglied* vor, * nach;
	void* daten;

} Kettenglied;

static Kettenglied* start = NULL;
static Kettenglied* actual = NULL;


void liste_add(void* data)
{
	Kettenglied* neu = malloc(sizeof(Kettenglied));
	memset(neu, 0,sizeof(Kettenglied));
	neu->daten = data;
	if(liste_isEmpty())
	{
		start  = neu;
	} else
	{
		liste_moveLast();
		actual->nach = neu;
		neu->vor = actual;
	}
	actual = neu;

	
}
void* liste_get()
{
	return liste_isEmpty() ? NULL: actual->daten;
}
bool liste_update(void* value){ // Nur Wert im aktellen KG aktualisieren.. True wenn Ok False wenn Liste leer
	if(liste_isEmpty())
		return false;
	actual->daten = value;
	return true;
}
bool liste_remove() // Bitte nicht programmieren
{
	return true;
}

bool liste_movePrevious()
{
	if(liste_isBOL())
		return false;
	actual = actual->vor;
	return true;
}
bool liste_moveNext()
{
	if (liste_isEOL())
		return false;
	actual = actual->nach;
	return true;
}
bool liste_moveFirst()
{
	if(liste_isEmpty())
		return false;
	
	while(liste_movePrevious()) {}

	return true;
}
bool liste_moveLast()
{
	if (liste_isEmpty())
		return false;

	while (liste_moveNext()) {}

	return true;
}


bool liste_isEmpty()
{
	return start == NULL;
}
bool liste_isBOL()
{
	return start == actual;
}
bool liste_isEOL(){
	return liste_isEmpty() || actual->nach == NULL;
}