#pragma once
#include <iostream>

using namespace std;

struct Node 
{
	int value;
	Node* pNext;
};

class List
{
	Node* pHead; // вказівник на початок списку
	Node* pTail; // вказівник на кінець списку
	int count;

public:
	List();
	~List();
	
	void Print() const;
	void AddTail(int value);
	void DeleteHead();
	int GetCount() const;
	void Clear();
};

