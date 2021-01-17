#include "PriorityQueue.h"
#include <ctime>

void main() 
{
	const int size = 10;
	srand(time(0));
	PriorityQueue pq(size);
	int el;
	int priority;

	for (int i = 0; i < size; i++)
	{
		el = rand() % 20;
		priority = rand() % 100;
		cout << "Try to add " << el << " with priority " << priority << endl;
		pq.Add(el, priority);
	}
	cout << "___________________________\n\n";
	pq.Show();
	cout << "Count: " << pq.GetCount() << endl;
	system("pause");

	cout << "Extracted: " << pq.Extract() << endl;
	pq.Show();
	system("pause");

	pq.Extract();
	pq.Extract();
	pq.Extract();

	cout << "After 4 extracted: \n";
	pq.Show();
}
