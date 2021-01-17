#pragma once
#include <iostream>

using namespace std;

class PriorityQueue
{
	int* queue;
	int* priorities;
	int maxLength;
	int queueLength;

public:
	PriorityQueue(int max);
	~PriorityQueue();

	void Add(int el, int priority);
	int Extract();

	bool isFull() const;
	bool isEmpty() const;
	int GetCount() const;
	void Clear();
	void Show() const;
};

