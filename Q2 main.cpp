#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;

int main()
{
	int NumOfNodes1 = 0;
	cout << "Number of Nodes in the List 1 : ";
	cin >> NumOfNodes1;
	DoubleLinkedList l1;
	int value1 = 0;
	cout << "Enter list 1 data : \n";
	for (int i = 1; i <= NumOfNodes1; i++)
	{
		cin >> value1;
		l1.insertEnd(value1);
	}
	int NumOfNodes2 = 0;
	cout << "Number of Nodes in the list 2 : ";
	cin >> NumOfNodes2;
	DoubleLinkedList l2;
	int value2 = 0;
	cout << "Enter list 2 Data : \n";
	for (int i = 1; i <= NumOfNodes2; i++)
	{
		cin >> value2;
		l2.insertEnd(value2);
	}
	system("CLS");

	cout << "Number of Nodes in the List 1 : " << NumOfNodes1 << endl;
	cout << "Enter list 1 data : ";
	l1.print();
	cout << endl << endl;
	cout << "Number of Nodes in the list 2 : " << NumOfNodes2 << endl;
	cout << "Enter list 2 Data : ";
	l2.print();
	cout << endl << endl;
	//check duplicate values
	bool m = 0, n = 0;
	m = l1.checkDuplicate(NumOfNodes1);
	n = l2.checkDuplicate(NumOfNodes2);
	if (m == 1 || n == 1)
	{
		cout << "Error : Duplicate items in the lists.\n";
		exit(0);
	}
	//check common values
	cout << "Common Values : ";
	l1.commonElements(l2);
	cout << endl;

	return 0;
}