#pragma once // if pragma does not compile in older version of C++ just comment it out, header guards are included

#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include <iostream>
#include <ctime>
using namespace std;

class LinkedList {
public:
	LinkedList();
	~LinkedList();
	
	void InsertLast(int value);								//Insert at end of the list
	void InsertFirst(int value);							//Insert at start of the list

	void RemoveLast();										//Remove last entry of the list
	void RemoveFirst();										//Remove first entry of the list

	void Print();											//Print list nodes: value, index

	void InsertIncrementalAtEnd(int numEntries);			//for debug purposes. Fills a list with incremental data.
	void InsertRandomAtEnd(int numEntries, int maxValue);	//for debug purposes. Fills a list with random data.

private:
	typedef struct node
	{
		int index, data;
		node* next;
	}*NodePtr;

	NodePtr _current, _temp, _head;
};

#endif // _LINKED_LIST_H_
