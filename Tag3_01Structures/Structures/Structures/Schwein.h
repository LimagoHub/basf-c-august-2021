#pragma once

typedef struct schwein
{
	// public
	char name[32];
	int gewicht;

} Schwein;

void schwein_init(Schwein* schwein);
void schwein_ausgabe(const Schwein *schwein);
void schwein_set_name(Schwein *schwein, const char* name);

