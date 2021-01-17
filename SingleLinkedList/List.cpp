#include "List.h"

List::List()
{
	pHead = pTail = NULL;
	count = 0;
}

List::~List()
{
	Clear();
}

void List::Print() const
{
	Node* temp = pHead;
	
	while (temp != NULL)
	{
		cout << temp->value << "\t";
		temp = temp->pNext; // переходимо на наступну ноду
	}
	cout << endl;
}

void List::AddTail(int value)
{
	// створення нового елемента списка (нода)
	Node* forAdd = new Node;
	forAdd->value = value; // переписуэмо інформаційну частину
	forAdd->pNext = NULL; // вказівник на наступний елемент - null (бо його немає)

	if (pHead != NULL) // якщо список не порожній
	{
		pTail->pNext = forAdd; // зміщуємо вказівник хвоста, він тепер вказує на нову ноду
		pTail = forAdd; // переприсвоюємо хвіст (тепер це наша нода)
	}
	else pHead = pTail = forAdd; // якщо список порожній

	count++;
}

void List::DeleteHead()
{
	Node* temp = pHead;
	if (pHead != NULL)
	{
		pHead = pHead->pNext;
	}

	count--;

	delete temp;
}

int List::GetCount() const
{
	return count;
}

void List::Clear()
{
	while (pHead) 
	{
		DeleteHead();
	}

	count = 0;
}
