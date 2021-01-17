#include "Queue.h"
#include <ctime>

void main()
{
	const int size = 10;
	srand(time(0));
	Queue q(size);
	int el;
	
	for (int i = 0; i < size; i++)
	{
		el = rand() % 20;
		cout << "Try to add " << el << endl;
		q.Add(el);
	}
	cout << "___________________________\n\n";
	q.Show();
	cout << "Count: " << q.GetCount() << endl;
	system("pause");

	cout << "Extracted: " << q.Extract() << endl;
	system("pause");

	q.Extract();
	q.Extract();
	q.Extract();

	cout << "After 4 extracted: \n";
	q.Show();
}