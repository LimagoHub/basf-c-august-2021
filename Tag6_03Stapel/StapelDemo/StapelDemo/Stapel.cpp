#include "Stapel.h"

#include <string>

Stapel::Stapel(const size_t size):data(new int[size]),index(0),size_(size)
{
}

void Stapel::init(const Stapel& other)
{
	size_ = other.size_;
	index = other.index;
	data = new int[size_];
	memcpy(data, other.data, sizeof(int) * size_);
}

Stapel::Stapel(const Stapel& other)
{
	init(other);
	
 }

Stapel& Stapel::operator=(const Stapel& other)
{
	delete[] data;
	init(other);
	return *this;
}


Stapel::~Stapel()
{
	delete[] data;
}

void Stapel::push(const int value) 
{
	if (is_full())
		throw stapel_exception{"Overflow"};
	
	data[index++] = value;
}

int Stapel::pop()
{
	if (is_empty())
		throw stapel_exception{ "Underflow" };

	return data[--index];
}

bool Stapel::is_empty() const noexcept
{
	return index <= 0;
}

bool Stapel::is_full() const noexcept
{
	return index >= size_;
}

size_t Stapel::size() const noexcept
{
	return size_;
}


