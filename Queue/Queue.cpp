#include "Queue.h"

Queue::Queue(int max)
{
	maxLength = max;
	queue = new int[maxLength];
	queueLength = 0;
}

Queue::~Queue()
{
	delete[] queue;
}

void Queue::Add(int el)
{
	if (!isFull())
	{
		queue[queueLength++] = el;
	}
}

int Queue::Extract()
{ 
	if (!isEmpty())
	{
		int temp = queue[0];
		for (int i = 1; i < queueLength; i++)
		{
			queue[i - 1] = queue[i];
		}

		queueLength--;
		return temp;
	}

	return INT_MIN;
}

bool Queue::isFull() const
{
	return queueLength == maxLength;
}

bool Queue::isEmpty() const
{
	return queueLength == 0;
}

int Queue::GetCount() const
{
	return queueLength;
}

void Queue::Clear()
{
	queueLength = 0;
}

void Queue::Show() const
{
	for (int i = 0; i < queueLength; i++)
	{
		cout << queue[i] << "\t";
	}

	cout << endl;
}
