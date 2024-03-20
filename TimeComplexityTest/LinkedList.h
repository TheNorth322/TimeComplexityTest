#pragma once
#include <iostream>

class Node {
public:
	int data;
	Node* next;

	Node()
	{
		data = 0;
		next = NULL;
	}

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

class Linkedlist {
	Node* head;
	int list_size;

public:
	Linkedlist() { head = NULL; }

	Linkedlist(int size) {
		head = NULL;
		list_size = size;
	}

	void insertNode(int);

	void printList();

	void deleteNode(int);
};
