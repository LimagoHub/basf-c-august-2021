#pragma once
#include <ostream>

class Punkt
{
private:
	double x, y;
	void set_x(double x);
	void set_y(double y);
public:
	Punkt(const double x = 0, const double y = 0);


	double get_x() const;
	double get_y() const;

	void rechts();
	void links();
	void oben();
	void unten();

	friend std::ostream& operator<<(std::ostream& os, const Punkt& obj);
};



// Preincrement und postincrement ++p und p++ ( x und y um 1 erhöhen)
// p += value ( x und y um value erhöhen)
// p *= value; ( x und y mit  value multiplizieren)
// p3 = p1 + p2 (x von p3 = p1.x + p2.x und y  von p3 = p1.y + p2.y

// Immer beachten, dass der Bereich nicht verlassen wird