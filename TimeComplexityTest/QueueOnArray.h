#pragma once

class QueueOnArray {
public:

	QueueOnArray() = delete;
	QueueOnArray(int size);
	~QueueOnArray();

	void push(int value);
	int pop();
	void display();

private:
	int* values;
	int head;
	int tail;
	int queue_size;
	bool is_empty;
};