#include "Stapel.h"

#include <string>

Stapel::Stapel(const size_t size):data(new int[size]),index(0),size_(size)
{
}

Stapel::Stapel(const Stapel& other):data(new int[other.size_]), index(other.index), size_(other.size_)
{
	for (int i = 0; i < size_; ++i)
	{
		data[i] = other.data[i];
	}

	//memcpy(data, other.data, size_);
}


Stapel::~Stapel()
{
	delete[] data;
}

void Stapel::push(const int value)
{
	if (is_full())
		return;
	
	data[index++] = value;
}

int Stapel::pop()
{
	if (is_empty())
		return 0;

	return data[--index];
}

bool Stapel::is_empty() const
{
	return index <= 0;
}

bool Stapel::is_full() const
{
	return index >= size_;
}

size_t Stapel::size() const
{
	return size_;
}
