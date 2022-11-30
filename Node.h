#pragma once
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

public:
    Node() :data(0), prev(NULL), next(NULL) {}
};