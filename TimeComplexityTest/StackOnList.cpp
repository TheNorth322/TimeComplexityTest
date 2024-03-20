#include "StackOnList.h"
#include <iostream>
#include <list>

StackOnList::StackOnList() {
	this->list = std::list<int>();
}

StackOnList::~StackOnList() {
	list.clear();
}

void StackOnList::push(int value) {
	this->list.push_front(value);
}

int StackOnList::pop() {
	int value = this->list.front();
	this->list.pop_front();
	return value;
}

void StackOnList::display() {
	for (int val : list) {
		std::cout << val << " ";
	}
	std::cout << std::endl;
}