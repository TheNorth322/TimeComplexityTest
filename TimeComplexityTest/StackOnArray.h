#pragma once

class StackOnArray {
public:
	
	StackOnArray() = delete;
	StackOnArray(int stack_size);
	~StackOnArray();

	void push(int value);
	int pop();
	void display();

private:
	int* values;
	int last_elem_index;
	int stack_size;
};