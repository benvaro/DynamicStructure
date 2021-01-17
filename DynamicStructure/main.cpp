#include <iostream>
#include <ctime>
#include "Stack.h"

using namespace std;

void main()
{
	srand(time(0));
	Stack stack;
	int el;

	cout << "Count: " << stack.getCount() << endl; // 0
	while (!stack.isFull())
	{
		el = rand() % 20;
		cout << "Try to push " << el << endl; // 1 2 3
		stack.push(el);
	}

	cout << "Count: " << stack.getCount() << endl; // 10
	system("pause");

	while (!stack.isEmpty())
	{
		stack.pop(el);
		cout << "Deleted: " << el << endl; // 3 2 1
	}
	cout << "Count: " << stack.getCount() << endl; // 0
	system("pause");

	stack.push(100);
	cout << "Count: " << stack.getCount() << endl; // 1
	system("pause");

	stack.clear();
	cout << "Count after clear: " << stack.getCount() << endl; // 0

}