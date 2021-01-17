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
		temp = temp->pNext; // ���������� �� �������� ����
	}
	cout << endl;
}

void List::AddTail(int value)
{
	// ��������� ������ �������� ������ (����)
	Node* forAdd = new Node;
	forAdd->value = value; // ����������� ������������ �������
	forAdd->pNext = NULL; // �������� �� ��������� ������� - null (�� ���� ����)

	if (pHead != NULL) // ���� ������ �� �������
	{
		pTail->pNext = forAdd; // ������ �������� ������, �� ����� ����� �� ���� ����
		pTail = forAdd; // �������������� ���� (����� �� ���� ����)
	}
	else pHead = pTail = forAdd; // ���� ������ �������

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
