#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vect;
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(10);
	vect.push_back(20);
	vect.push_back(25);
	try  {
		std::cout << easyfind(vect, 25) << std::endl;
		std::cout << easyfind(vect, 2) << std::endl;
		std::cout << easyfind(vect, -1) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}