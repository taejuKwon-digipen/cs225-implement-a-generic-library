#include <iostream>
#include "array.h"
#include <gsl/gsl>

int main(void) {
	Bokju_list<int> list;
	list.push_back(3);
	list.push_back(5);
	list.push_back(4);

	std::cout << list.begin() << std::endl;
	list.pop_front();
	std::cout << list.begin() << std::endl;
	list.pop_back();
	std::cout << list.end() << std::endl;
	list.clear();
}