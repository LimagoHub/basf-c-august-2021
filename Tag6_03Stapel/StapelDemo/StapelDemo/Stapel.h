#pragma once
class Stapel
{
private:
	int* data;
	unsigned index;
	size_t size_;
public:

	Stapel(const size_t size = 10);
	Stapel(const Stapel& other);
	
	~Stapel();
	void push(const int value);
	int pop();
	bool is_empty() const;
	bool is_full() const ;
	size_t size() const ;
};

