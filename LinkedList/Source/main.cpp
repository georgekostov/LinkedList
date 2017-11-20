#include "../Headers/LinkedList.h"

int main() {

	LinkedList list;

	for (int i = 0; i < 15; i++)
	{
		list.Insert(i * 20 - (15*i));
	}

	list.Print();

	cin.get();
	return 0;
}