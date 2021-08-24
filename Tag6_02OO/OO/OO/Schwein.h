#pragma once
#include <string> 
class Schwein
{
	friend Schwein operator + (const Schwein& a, const Schwein& b);
private:
	// Instanzvariablen
	std::string name;
	int gewicht;

	// Klassenvariablen
	static int counter;

	void set_gewicht(const int gewicht);
public:

	static int get_counter() ;

	Schwein(std::string name = "nobody");
	Schwein(const Schwein& other) ;

	//Schwein(const Schwein& other) = delete;
	
	~Schwein();
	
	std::string get_name() const;

	void set_name(const std::string& name);

	int get_gewicht() const;

	void fressen();

	Schwein & operator ++ (); // Preincrement
	Schwein operator ++ (int dummy); // Postincrement (Parameter ist nur Kennzeichen für den Kompiler
	Schwein& operator +=(int anzahlKartoffeln);
	
	
};


Schwein operator + (const Schwein& a, const Schwein& b);

