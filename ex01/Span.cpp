#include "Span.hpp"
#include <iostream>
Span::Span()
{
	_capacity = 0;
	_size = 0;
}

Span::Span(unsigned int n)
{
	_capacity = n;
	_size = 0;
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &rhs)
{
	_capacity = rhs._capacity;
	_size = rhs._size;
	_data = rhs._data;
	return *this;
}

void Span::addNumber(int n)
{
	if (_size < _capacity)
	{
		_data.push_back(n);
		_size++;
	}
	else
		throw Span::SpanFullException();
}


const char *Span::SpanFullException::what() const throw()
{
	return "Span is full";
}

const char *Span::SpanEmptyException::what() const throw()
{
	return "Span is empty";
}

int Span::shortestSpan()
{
	if (_size < 2)
		throw Span::SpanEmptyException();
	std::sort(_data.begin(), _data.end());
	int min = _data[1] - _data[0];
	for (unsigned int i = 1; i < _size - 1; i++)
	{
		if (_data[i + 1] - _data[i] < min)
			min = _data[i + 1] - _data[i];
	}
	return min;
}

int Span::longestSpan()
{
	if (_size < 2)
		throw Span::SpanEmptyException();
	std::sort(_data.begin(), _data.end());
	int max = _data[_size - 1] - _data[0];
	return max;
}

void Span::addRange(unsigned int range, int n)
{
	if (_size + range <= _capacity)
	{
		_data.insert(_data.begin() + _size, range, n);
		_size += range;
	}
	else
		throw Span::SpanFullException();
}

unsigned int Span::size()
{
	return _size;
}