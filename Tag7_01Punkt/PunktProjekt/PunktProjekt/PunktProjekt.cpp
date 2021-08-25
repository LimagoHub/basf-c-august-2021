// PunktProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Punkt.h"





int main()
{


	Punkt p{15,15};
		
	Punkt p2 = p; // Copy Construktor

	Punkt p3;
	p3 = p; // Zuweisung
		
    std::cout << "Punkt = " << p <<  std::endl;
}


