#pragma once
#include <list>

class QueueOnList {
public:
	QueueOnList();
	~QueueOnList();

	void push(int value);
	int pop();
	void display();

private:
	std::list<int> list;
};
