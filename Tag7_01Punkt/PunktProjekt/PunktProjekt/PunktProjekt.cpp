// PunktProjekt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Punkt.h"
int main()
{

	Punkt p{15,15};

	
    std::cout << "x = " << p.get_x() << ", y = " << p.get_y() << std::endl;
}


