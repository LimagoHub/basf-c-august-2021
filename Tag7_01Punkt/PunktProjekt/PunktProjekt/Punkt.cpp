#include "Punkt.h"

Punkt::Punkt(const double x, const double y) 
{
	set_x(x);
	set_y(y);
}


void Punkt::set_x(double x)
{
	if (x < -10) x = -10;
	if (x > 10) x = 10;
	this->x = x;
}
void Punkt::set_y(double y)
{
	if (y < -10) y = -10;
	if (y > 10) y = 10;
	this->y = y;
}


std::ostream& operator<<(std::ostream& os, const Punkt& obj) {
	return os
		<< "x: " << obj.x
		<< " y: " << obj.y;
}



double Punkt::get_x() const
{
	return x;
}



double Punkt::get_y() const
{
	return y;
}

void Punkt::rechts()
{
	set_x(get_x() + 1);
}
void Punkt::links()
{
	set_x(get_x() - 1);
}
void Punkt::oben()
{
	set_y(get_y() + 1);
}
void Punkt::unten()
{
	set_y(get_y() - 1);
}

