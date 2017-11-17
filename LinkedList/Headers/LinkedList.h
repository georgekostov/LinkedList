#pragma once // if pragma does not compile in older version of C++ just comment it out, header guards are included

#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

class LinkedList {
public:
	LinkedList();
	~LinkedList();

private:
	typedef struct node
	{
		int index, data;
	}*nodePtr;

	nodePtr _next, _current, _temp, _head;
};

#endif // _LINKED_LIST_H_
