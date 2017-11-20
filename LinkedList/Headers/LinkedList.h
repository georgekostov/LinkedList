#pragma once // if pragma does not compile in older version of C++ just comment it out, header guards are included

#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include "iostream"
using namespace std;

class LinkedList {
public:
	LinkedList();
	~LinkedList();

	void Insert(int value);
	void Print();

private:
	typedef struct node
	{
		int index, data;
		node* next;
	}*NodePtr;

	NodePtr _current, _temp, _head;
};

#endif // _LINKED_LIST_H_
