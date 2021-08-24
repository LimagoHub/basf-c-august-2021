#include <iostream>
#include "Stapel.h"
int main()
{
	Stapel myStapel{5};

	Stapel a;

	a = myStapel; // Zuweisung

	Stapel b{ myStapel }; // Erzeugung
	

	for (int i = 0; i < myStapel.size(); ++i)
	{
		if( ! myStapel.is_full())
		{
			myStapel.push(i * 10);
		}
	}

	while( ! myStapel.is_empty())
	{
		std::cout << myStapel.pop() << std::endl;
	}
	
	
	
    std::cout << "Hello World!\n";
}


