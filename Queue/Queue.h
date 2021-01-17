#pragma once
#include <iostream>

using namespace std;

class Queue
{
	int* queue;
	int maxLength;
	int queueLength;

public:
	Queue(int max);
	~Queue();

	void Add(int el);
	int Extract();

	bool isFull() const;
	bool isEmpty() const;
	int GetCount() const;
	void Clear();
	void Show() const;
};

