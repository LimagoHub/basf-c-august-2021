#include <string.h>
#include "Schwein.h"
#define _CRT_SECURE_NO_WARNINGS

void schwein_init(Schwein* schwein)
{
	schwein_set_name(schwein, "nobody");
	schwein->gewicht = 10;
}


void schwein_ausgabe(const Schwein *schwein)
{
	printf("Dieses Schwein heisst %s und wiegt %d Kilo!\n", schwein->name, schwein->gewicht);
}

void schwein_set_name(Schwein *schwein, char const* name)
{
	
	strcpy(schwein->name, name);
}



// piggy.ausgabe()