#include <stdio.h>
#include "queue.h"
Queue::Queue()
{
	head = NULL;
	tail = NULL;
}
void Queue::push(int value)
{
	Node* node = new Node();
	node->value = value;
	node->next = NULL;
	if(head == NULL)
	{
		tail = head = node;
	}
	else
	{
		tail->next = node;
		tail = node;
	}
}
void Queue::print()
{
	printf("start printing queue\n");
	Node* current;
	current = head;
	while(current != NULL)
	{
		printf("%d ", current->value);
		current = current->next;
	}
	printf("\n");
}
int Queue::pop()
{
	int value = head->value;
	head = head->next;
	return value;
}
Queue::~Queue()
{
	Node *current = head;
	while (current != NULL)
	{
		Node *toRemove = current;
		current = current->next;
		delete toRemove;
	}
}
