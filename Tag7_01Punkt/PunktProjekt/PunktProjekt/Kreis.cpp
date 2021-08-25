#include "Kreis.h"

Kreis::Kreis(double radius, double x, double y):Punkt(x,y), radius(radius)
{
}

void Kreis::set_radius(const double radius)
{
	this->radius = radius;
}

double Kreis::get_radius() const
{
	//super.myMethod();
	//Punkt::myMethod();

	return radius;
}
