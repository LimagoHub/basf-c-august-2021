// OO.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "Schwein.h"

using namespace std;


//Schwein frederick{ "frederick" };


int main()
{


	


	Schwein piggy{ "Miss Piggy" };
	
	Schwein babe{ "Babe" };

	
	Schwein nobody = piggy + babe;

	cout << nobody.get_gewicht() << endl;
}


