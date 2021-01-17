#include "PriorityQueue.h"

int PriorityQueue::GetCount() const
{
	return queueLength;
}
PriorityQueue::PriorityQueue(int max)
{
	maxLength = max;
	queue = new int[maxLength];
	priorities = new int[maxLength];
	queueLength = 0;
}

PriorityQueue::~PriorityQueue()
{
	delete[] queue;
	delete[] priorities;
}

void PriorityQueue::Add(int el, int priority)
{
	if (!isFull())
	{
		queue[queueLength] = el;
		priorities[queueLength++] = priority;
	}
}

// пріоритетне виключення
int PriorityQueue::Extract()
{
	if (!isEmpty())
	{
		int max = priorities[0];
		int max_pos = 0;
		for (int i = 1; i < queueLength; i++)
		{
			if (priorities[i] > max)
			{
				max = priorities[i];
				max_pos = i;
			}
		}

		max = queue[max_pos];

		for (int i = max_pos; i < queueLength - 1; i++)
		{
			queue[i] = queue[i + 1];
			priorities[i] = priorities[i + 1];
		}
		queueLength--;

		return max;
	}
}

bool PriorityQueue::isFull() const
{
	return queueLength == maxLength;
}

bool PriorityQueue::isEmpty() const
{
	return queueLength == 0;
}

void PriorityQueue::Clear()
{
	queueLength = 0;
}

void PriorityQueue::Show() const
{
	for (int i = 0; i < queueLength; i++)
	{
		cout << queue[i] << "  -----  " << priorities[i] << endl;
	}
}
