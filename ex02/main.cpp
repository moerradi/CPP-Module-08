#include "MutantStack.hpp"
#include <iostream>
#include <list>


void mstack_test()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::const_iterator it = mstack.begin();
	MutantStack<int>::const_iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "New top : " << s.top() << std::endl;
}
void list_test()
{
	std::list<int> l;
	l.push_back(5);
	l.push_back(17);
	std::cout << "Top : " << l.back() << std::endl;
	l.pop_back();
	std::cout << "Top : " << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	//[...]
	l.push_back(0);
	std::list<int>::const_iterator it = l.begin();
	std::list<int>::const_iterator ite = l.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(l);
	std::cout << "New top : " << s.back() << std::endl;
}
int main()
{
	std::cout << "MutantStack" << std::endl;
	mstack_test();
	std::cout << "std::list" << std::endl;
	list_test();
	return 0;
}