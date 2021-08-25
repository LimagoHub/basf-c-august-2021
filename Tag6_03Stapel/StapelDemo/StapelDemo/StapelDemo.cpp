#include <iostream>
#include "Stapel.h"
int main()
{
	try {
		Stapel myStapel{ 5 };

		Stapel a;

		a = myStapel; // Zuweisung

		Stapel b{ myStapel }; // Erzeugung


		for (int i = 0; i < myStapel.size(); ++i)
		{
			if (!myStapel.is_full())
			{
				myStapel.push(i * 10);
			}
		}

		while (!myStapel.is_empty())
		{
			std::cout << myStapel.pop() << std::endl;
		}

		myStapel.pop();

		std::cout << "Hello World!\n";
	} catch(const stapel_exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


