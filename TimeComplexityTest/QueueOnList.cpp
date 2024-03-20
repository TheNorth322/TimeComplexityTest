#include "QueueOnList.h"
#include <iostream>

QueueOnList::QueueOnList() {
	this->list = std::list<int>();
}

QueueOnList::~QueueOnList() {
	this->list.clear();
}

void QueueOnList::push(int val) {
	this->list.push_back(val);
}

int QueueOnList::pop() {
	int val = this->list.front();
	this->list.pop_front();
	return val;
}

void QueueOnList::display() {
	for (int val : list) {
		std::cout << val << " ";
	}
	std::cout << std::endl;
}