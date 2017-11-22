#include "../Headers/LinkedList.h"

LinkedList::LinkedList() : 
	_current(NULL), 
	_temp(NULL), 
	_head(NULL) 
{
	srand((int)time(0));
}

LinkedList::~LinkedList() {

}

void LinkedList::InsertLast(int value) {
	NodePtr newNode = new node;
	newNode->data = value;
	newNode->next = NULL;
	
	//if the list is empty insert first value at head with index 0
	if (_head == NULL) {
		newNode->index = 0;
		_head = newNode;
	}
	// else there are already previous entries
	else
	{
		_current = _head;

		while (_current->next) {
			_current = _current->next;
		}

		newNode->index = _current->index + 1;
		_current->next = newNode;
	}

	newNode = NULL;
	delete newNode;
}

void LinkedList::RemoveLast() {
	NodePtr removeNode = new node;

	if (_head == NULL) {
		cout << "List is Empty. Nothing to remove..." << endl;
	}
	else 
	{
		_current = _head;
		_temp = _head;

		while (_current->next)
		{
			_temp = _current;
			_current = _current->next;
		}
		removeNode = _current;
		delete removeNode;
		removeNode = NULL;
		_temp->next = NULL;
	}
}

void LinkedList::InsertFirst(int value) {
	NodePtr newNode = new node;
	newNode->data = value;
	newNode->index = 0;

	//if list is empty
	if (_head == NULL) {
		newNode->next = NULL;
	}
	else 
	{
		newNode->next = _head;
		_current = _head;

		while (_current)
		{
			_current->index = _current->index++;
			_current = _current->next;
		}
	}

	_head = newNode;
}

void LinkedList::Print() {
	if (_head == NULL) {
		cout << "List is Empty..." << endl;
	}
	else
	{
		_current = _head;

		while (_current)
		{
			cout << "Data: " << _current->data << ", Index: " << _current->index << endl;
			_current = _current->next;
		}
	}
}

void LinkedList::InsertIncrementalAtEnd(int numEntries) {
	for (int i = 0; i < numEntries; i++)
	{
		this->InsertLast(i);
	}
}

void LinkedList::InsertRandomAtEnd(int numEntries, int maxValue) {
	for (int i = 0; i < numEntries; i++)
	{	
		this->InsertLast((rand() % maxValue) + 1);
	}
}