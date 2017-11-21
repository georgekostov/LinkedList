#include "../Headers/LinkedList.h"

int main() {

	LinkedList list;

	list.InsertRandomAtEnd(5, 100);
	list.RemoveLast();
	list.RemoveLast();
	list.InsertIncrementalAtEnd(5);
	list.RemoveLast();


	list.Print();

	cin.get();
	return 0;
}