#include "Span.hpp"
#include <iostream>

int main()
{
	{
		Span sp = Span(5);
		std::cout << "size : " << sp.size() << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "size : " << sp.size() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span spa = Span(100000);
		for (int i = 0; i < 60000; i++)
			spa.addNumber(i);
		std::cout << "size : " << spa.size() << std::endl;
		spa.addRange(40000, 100);
		std::cout << "size : " << spa.size() << std::endl;
		std::cout << spa.shortestSpan() << std::endl;
		std::cout << spa.longestSpan() << std::endl;
	}
}
