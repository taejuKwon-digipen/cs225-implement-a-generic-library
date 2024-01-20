// Taeju Kwon, Juhong Mo
// Implement a Generic Library
// CS225
// Fall 2021

#include <iostream>
#include "../include/BokjuList.h"
#include <gsl/gsl>

using namespace BokjuLibrary;

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
}