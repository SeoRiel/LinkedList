#include <iostream>
#include <stdio.h>

template<typename tNode>
struct Node
{
	tNode data;
	struct Node<tNode>* next;
};

template<typename tData>
struct LinkedList
{
	Node<tData>* head;
	Node<tData>* tail;
	Node<tData>* tailPointer;
};

template<typename tNode>
void InputData(tNode* getData)
{
	Node<tNode>* newNode = new Node<tNode>;
	newNode->data = getData;
	newNode->next = NULL;

	if (newNode.data == NULL && newNode.next == NULL)
	{
		newNode->data = newNode->next = getData;
	}
	else
	{
		
	}
}

template<typename tNode>
void DeleteData(tNode* getData)
{
	Node<tNode>* node = getData->head;

	while (node->next->next != NULL)
	{
		node = node->next;
	}
	node->next = node->next->next;
	getData->tail = node;

	delete Node<tNode>;
}

template<typename tNode>
void PrintData(tNode* getData)
{
	struct Node<tNode>* node = getData->head;

	putchar('[');

	while (node != NULL)
	{
		printf("%d, ", node->data);
		node = node->data;
	}

	putchar(']');
	putchar('\n');
}

int main()
{
	int test = 1;

	InputData<int>(&test);

	return 0;
}