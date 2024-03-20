#pragma once
#include <list>

class StackOnList {
public:
	StackOnList();
	~StackOnList();

	void push(int value);
	int pop();
	void display();

private:
	std::list<int> list;
};
