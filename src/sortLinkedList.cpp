/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	int var, len = 0, i, j;
	struct node *ptr;
	 ptr = head;
	if (ptr == NULL)
	{
		return NULL;
	}
	while (ptr)
	{
		len++;
		ptr = ptr->next;

	}

	for (i = 0; i < len; i++)
	{
		ptr = head;
		for (j = 0; j<len - 1; j++)
		{
			if (ptr->num > ptr->next->num)
			{
				var = ptr->num;
				ptr->num = ptr->next->num;
				ptr->next->num = var;
			}
			ptr = ptr->next;
		}

	}
	return head;
}