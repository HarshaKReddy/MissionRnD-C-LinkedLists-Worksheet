/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

typedef struct node {
	int num;
	node *next;
};
node * newNode(int num) {
	node *temp = (node *)malloc(sizeof(node));
	temp->num = num;
	temp->next = NULL;
	return temp;
}
node * numberToLinkedList(int N) {

	if (N < 0)
		N = N*(-1);
	node *head = newNode(N % 10);
	N /= 10;
	while (N) {
		node *temp = newNode(N % 10);
		temp->next = head;
		head = temp;
		N /= 10;
	}
	return head;
}
