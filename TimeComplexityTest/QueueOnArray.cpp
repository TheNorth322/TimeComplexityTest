#include "QueueOnArray.h"
#include <iostream>

QueueOnArray::QueueOnArray(int size) {
	queue_size = size;
	is_empty = true;
	tail = head = 0;	
	values = new int[queue_size];
}

void QueueOnArray::push(int value) {
	if (is_empty) {
		values[head] = value;
		is_empty = false;
	}
	else {
		if ((head + 1) % queue_size == tail)
			throw "End of queue size";

		if (head+1 == queue_size) 
			head = 0;
		else 
			head += 1;
		values[head] = value;
	}
}

int QueueOnArray::pop() {
	int value = values[tail];
	tail += 1;
	if (tail == queue_size) 
		tail = 0;
	else if (tail == head) 
		is_empty = true;
	return value;
}

void QueueOnArray::display() {
	for (int i = 0; i < queue_size; i++) {
		std::cout << values[i] << " ";
	}
	std::cout << "tail: " << tail << " head: " << head << std::endl;
}

QueueOnArray::~QueueOnArray() {
	delete[] values;
}
