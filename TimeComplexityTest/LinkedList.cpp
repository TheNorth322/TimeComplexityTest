#include <iostream>
#include "LinkedList.h"

using namespace std;



void Linkedlist::deleteNode(int nodeOffset)
{
	Node* temp1 = head, * temp2 = NULL;
	int ListLen = 0;

	if (head == NULL) {
		cout << "List empty." << endl;
		return;
	}

	while (temp1 != NULL) {
		temp1 = temp1->next;
		ListLen++;
	}
 
	if (ListLen < nodeOffset) {
		cout << "Index out of range"
			<< endl;
		return;
	}

	temp1 = head;

	if (nodeOffset == 1) {

		head = head->next;
		delete temp1;
		return;
	}


	while (nodeOffset-- > 1) {

		temp2 = temp1;

		temp1 = temp1->next;
	}

	temp2->next = temp1->next;


	delete temp1;
}

void Linkedlist::insertNode(int data)
{
	Node* newNode = new Node(data);

	if (head == NULL) {
		head = newNode;
		return;
	}

	Node* temp = head;

	int size = 0;
	while (temp->next != NULL && size < list_size) {
		size++;
		temp = temp->next;
	}
	if (size )

	temp->next = newNode;
}

void Linkedlist::printList()
{
	Node* temp = head;

	if (head == NULL) {
		cout << "List empty" << endl;
		return;
	}

	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}