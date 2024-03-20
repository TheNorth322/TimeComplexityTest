#include "StackOnArray.h"
#include <iostream>

StackOnArray::StackOnArray(int size) {
	stack_size = size;
	values = new int[stack_size];
	last_elem_index = -1;
}

void StackOnArray::push(int value) {
	if (last_elem_index >= stack_size) {
		throw "End of stack size";
	}
	last_elem_index++;
	values[last_elem_index] = value;
}

int StackOnArray::pop() {
	int value = values[last_elem_index];
	last_elem_index--;
	return value;
}

void StackOnArray::display() {
	for (int i = 0; i < stack_size; i++) {
		std::cout << values[i] << " ";
	}
} 

StackOnArray::~StackOnArray() {
	delete[] values;
}
