#pragma once
#include <iostream>
#include "Node.h"
using namespace std;
class DoubleLinkedList
{
public:
	Node* start;
public:
	DoubleLinkedList() :start(NULL) {}
	void insertBeg(int X);	//Insert a new node at the beginning
	void insertEnd(int X);		//Insert a node at the end
	void deleteBeg();		//Delete a node from the beginning 
	void deleteEnd();		//Delete a node from the end 
	void deleteByValue(int D);		//Delete a node with a given value 
	void print(); 			//Print current list
	Node* search(int F);	//Search an existing element 
	int sum();			//Add list values to get sum
	bool checkDuplicate(int num);
	void commonElements(DoubleLinkedList l2);
};
