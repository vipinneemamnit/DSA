#pragma once
#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* prev;
	Node* next;
	Node(int value) : data(value), prev(nullptr), next(nullptr) {}
	
};
void forwardTraversal(Node* head);
void backwardTraversal(Node* head);
int findLength(Node* head);



