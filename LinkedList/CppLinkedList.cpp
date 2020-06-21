#include <iostream>

//template<typename tdata>
class Node
{
private:
	int data = 0;
	Node* next = nullptr;

	// tdata data;
	// Node<tdata>* next;

public:
	// get data is this method
	void CreateNode(int value)
	{

	}

	void DeleteNode(int value)
	{

	}

	// ???? 굳이 여기 안넣어도 될 것 같은데;;
	void SearchNode(int value)
	{

	}
};

//template<typename tdata>
class LinkedList
{
private:
	Node* head;
	Node* tail;
	Node* arrow;

	int listSize = 0;

	// Node<tdata>* head;
	// Node<tdata>* tail;
	// Node<tdata>* arrow;

public:
	// Create Constructor
	// LinkedList->head & LinkedList->tail is initialization
	LinkedList() : head(nullptr), tail(nullptr) {}
	// Create Destructor
	~LinkedList() {}

	// Create LinkedList
	void CreateList(int value)
	{
		
	}

	// Remove LinkedList
	void RemoveList(int value)
	{

	}

	// Create head value
	void CreateHead(int value)
	{

	}

	// Delete head value
	void DeleteHead(int value)
	{

	}

	// Create tail value
	void CreateTail(int value)
	{

	}

	// Delete tail value
	void DeleteTail(int value)
	{

	}

	// Node search method
	void SearchNode()
	{

	}


	void PrintLinkedList(int value)
	{

	}
};

int main()
{
	std::cout << "Not create is 'LinkedList'" << std::endl;

	return 0;
}