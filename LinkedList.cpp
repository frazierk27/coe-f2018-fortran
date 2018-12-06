#include <iostream>
#include <stdlib.h>

struct node {
	int val;
	struct node * next;
};

int main () {
	node* head;
	node* second;
	node* third;
	
	head = (node *)malloc(sizeof(node));
 	// allocate 3 nodes in the heap
 	second = (node *)malloc(sizeof(node));
 	third = (node *)malloc(sizeof(node));

	head->val = 1; // setup first node
	head->next = second;
 	// note: pointer assignment rule
 	second->val = 2; // setup second node
 	second->next = third;
 	third->val = 3; // setup third link
 	third->next = NULL;
 	return 0;
 }
