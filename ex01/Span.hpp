#pragma once
#include <vector>
#include <algorithm>

class Span {
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &src);
		~Span();

		Span &operator=(Span const &rhs);

		class SpanFullException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class SpanEmptyException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void addRange(unsigned int range, int n);
		unsigned int size();
		std::vector<int>	_data;
	public:
		unsigned int 		_capacity;
		unsigned int		_size;

};