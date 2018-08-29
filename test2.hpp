#include <iostream>
#include <typeinfo>

template <typename T>
void test2()
{
	std::cout << typeid(T).name() << std::endl;
}
