#pragma once
#include "stapel_exception.h"
class Stapel
{
private:
	int* data;
	unsigned index;
	size_t size_;

	void init(const Stapel& other);
public:

	Stapel(const size_t size = 10);
	Stapel(const Stapel& other);
	
	~Stapel();
	void push(const int value) ;
	int pop();
	bool is_empty() const noexcept;
	bool is_full() const noexcept;
	size_t size() const noexcept;
	Stapel& operator = (const Stapel& other);
};

