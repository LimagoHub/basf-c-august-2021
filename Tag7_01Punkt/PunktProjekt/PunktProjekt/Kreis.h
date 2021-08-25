#pragma once
#include "Punkt.h"
class Kreis :    public Punkt
{
private:
	double radius;

public:

	Kreis(double radius = 0, double x = 0, double y = 0);
	
	void set_radius(const double radius);
	double get_radius() const;
};

