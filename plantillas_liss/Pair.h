#pragma once
#include <string>
#include <iostream>


template <class T>
class Pair
{
public:
	std::string name;
	T value;

	void print()
	{
		std::cout << "(" << name << "," << value << ")\n";
	}

	Pair<T>() {};
	

};

