#include <iostream>
#include	"LinkedListHeader.h"

// get data is this method
void Node::CreateNode(int value)
{
	Node* node = new Node;
	
	node->data = value;
	node->next = nullptr;
}

void Node::DeleteNode(int value)
{

}

// ???? 굳이 여기 안넣어도 될 것 같은데;;
void Node::SearchNode(int value)
{

}