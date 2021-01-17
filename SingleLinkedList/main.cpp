#include "List.h"

void main()
{
	List list;

	list.AddTail(100);
	list.AddTail(3);
	list.AddTail(56);

	list.Print(); // 100 3 56
	list.DeleteHead();
	list.Print(); // 3 56
}