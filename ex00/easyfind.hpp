#pragma once
#include <exception>
#include <algorithm>

template <typename T>
int easyfind(T cont, int i){
	typename T::iterator it;
	it = std::find(cont.begin(), cont.end(), i);
	if (it == cont.end())
		throw std::exception();
	return *it;
}
