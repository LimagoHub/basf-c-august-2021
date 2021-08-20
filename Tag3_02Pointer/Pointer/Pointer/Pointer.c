// Pointer.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

void strcpy(char * destination, const char * source)
{
	while (*destination++ = *source++){}
}

int stringlength(char * buffer)
{
	register int lenght = 0;
	while (buffer[lenght])
	{
		lenght++;
	}
	return lenght;
}


char * createString(char buffer[],int anzahl)
{
	printf("Unterprogramm -> %d\n", sizeof(buffer));
	int i;
	for(i = 0; i < anzahl; i++)
	{
		buffer[i] = 'a';
	}
	buffer[i] = 0;
	return buffer;
}


int main()
{
	char feld[100];
	createString(feld,5);
	printf("%d\n", sizeof(feld));


	
	//printf("%s\n", createString(feld, 5));
	//printf("%s\n", feld);
	
   /* int feld[10];

	for(int i = 0; i < 10 ; i++)
	{
		feld[i] = i * 10;
	}

	int* ptr;
	ptr = feld;

	printf("%d\n", feld[1]);
	printf("%d\n", *feld);
	
	printf("%d\n", *ptr++);
	printf("%d\n", *ptr++);
	printf("%d\n", *ptr++);*/
	
	//printf("%d\n", ptr[0]);


	/*char string[6];
	string[0] = 'H';
	string[1] = 'a';
	string[2] = 'l';
	string[3] = 'l';
	string[4] = 'o';
	string[5] = 0;*/

	char string[] = "Hallo";

	printf("%s\n", string);
	
}


