#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;


void DoubleLinkedList::insertEnd(int X)
{
	struct Node* New_Node = new Node;
	New_Node->data = X;
	New_Node->next = NULL;
	if (start == NULL)
	{
		start = New_Node;
	}
	else
	{
		Node* ptr = start;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = New_Node;
		New_Node->prev = ptr;
	}
}

void DoubleLinkedList::print()
{
	Node* ptr = start;
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}

bool DoubleLinkedList::checkDuplicate(int num)
{
	Node* ptr = start;
	while (ptr != NULL)
	{
		int value = ptr->data;
		Node* ptr2 = ptr->next;
		while (ptr2 != NULL)
		{
			if (ptr2->data == value)
			{
				return 1;
			}
			ptr2 = ptr2->next;
		}
		ptr = ptr->next;
	}
	return 0;
}

void DoubleLinkedList::commonElements(DoubleLinkedList l2)
{
	Node* ptr1 = start;

	while (ptr1 != NULL)
	{
		Node* ptr2 = l2.start;
		int value1 = ptr1->data;
		while (ptr2 != NULL)
		{
			int value2 = ptr2->data;
			if (value1 == value2)
			{
				cout << value1 << " ";
			}
			ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
}