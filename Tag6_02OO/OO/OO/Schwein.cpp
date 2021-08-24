#include <iostream>
#include "Schwein.h"


int Schwein::counter = 0;

Schwein::Schwein(std::string name):name(name), gewicht(10)
{
	std::cout << "Name: " << name << ". CTOR" << std::endl;
	Schwein::counter++;
}

Schwein::Schwein(const Schwein& other):name(other.name), gewicht(other.gewicht)
{
	Schwein::counter++;
}


Schwein::~Schwein()
{
	std::cout << "Name: " << name << ". Quieck" << std::endl;
	Schwein::counter;
}

std::string Schwein::get_name() const
{
	return this->name;
}

void Schwein::set_name(const std::string& name)
{
	this->name = name;
}

int Schwein::get_gewicht() const
{
	return gewicht;
}

void Schwein::set_gewicht(const int gewicht)
{
	this->gewicht = gewicht;
}

int Schwein::get_counter()
{
	return Schwein::counter;
}

void Schwein::fressen()
{
	//set_gewicht(get_gewicht() + 1);
	gewicht++;
}

Schwein & Schwein::operator++()
{
	gewicht++;
	return *this;
}

Schwein Schwein::operator++(int dummy)
{
	Schwein tmp = *this;
	gewicht++;
	return tmp;
}

Schwein& Schwein::operator+=(int anzahlKartoffeln)
{
	gewicht += anzahlKartoffeln;
	return *this;
}

Schwein operator+(const Schwein& a, const Schwein& b)
{
	Schwein result;
	result.set_gewicht(a.get_gewicht() + b.get_gewicht());
	return result;
}

