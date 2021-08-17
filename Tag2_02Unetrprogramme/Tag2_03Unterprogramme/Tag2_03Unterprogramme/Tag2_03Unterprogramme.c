// Tag2_03Unterprogramme.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include "ausgabe.h"


// void foo()
// {
// 	static int ebene = 0;
// 	
// 	ebene++;
//
// 	if (ebene > 10)
// 		return;
// 	
// 	printf("Hier ist foo\n");
// 	foo();
// }
void unter(int *a) // Übergabe bei reference
{
	*a = 100;
}

void ober()
{
	int x = 10;
	unter(&x);
	printf("%d\n", x);
	return;
}

int main()
{



	int y;
	scanf_s("%d", &y);
	ober();
	//foo();
	//foo();
	/*ausgabe("Welt");

	ausgabe("Universum");
	
	ausgabe("Galaxy");

	int sum = summe(3, 4);

	printf("%d\n", sum);*/
	
}



