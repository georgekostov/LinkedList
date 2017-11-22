#include "../Headers/LinkedList.h"

int main() {

	LinkedList list;

	list.InsertRandomAtEnd(5, 100);
	list.RemoveLast();
	list.RemoveLast();
	list.InsertIncrementalAtEnd(5);
	list.RemoveLast();

	list.InsertFirst(99);
	list.InsertFirst(199);
	list.InsertFirst(3);
	list.InsertFirst(4);
	list.InsertFirst(5);

	list.Print();

	cin.get();
	return 0;
}