#include <iostream>

// Template basis node class
template<typename tData>
class Node
{
	// Node data concealment class
private:
	tData data;
	Node<tData>* next;
	int nodeSize = 0;

	// Node Data Access
public:
	// Data getter/setter
	tData GetData()
	{
		// data = getData;
		return data;
	}
	void SetData(tData setData)
	{
		data = setData;
	}

	// next getter/setter
	tData GetNext()
	{
		return next;
	}
	void SetNext(tData setNext)
	{
		next = setNext;
	}

	int SizeCount()
	{
		return nodeSize;
	}

	void InitiCount(int InitiValue)
	{
		nodeSize = InitiValue;
	}
};

template <typename tData>
class LinkedList
{

private:
	Node<tData>* head;
	Node<tData>* tail;
	Node<tData>* tailFinder;
	int listSize = 0;

public:
	LinkedList() : head(nullptr), tail(nullptr) {}
	~LinkedList() {}

	// Using property 
	__declspec(property(get = GetData, put = SetData)) tData getData;
	__declspec(property(get = GetNext, put = SetNext)) tData inputNext;
	__declspec(property(get = SizeCount, put = InitiCount)) int size;

	void AddLinkedList(tData listData)
	{
		Node<tData>* node = new Node<tData>;

		listSize++;
		node->data = listData;
		node->next = nullptr;

		if (head == nullptr)
		{
			head = getData;
			tail = getData;
		}
		else
		{
			tail->next = node;
			tail = tail->next;
		}
	}

	void RemoveList(tData removeData)
	{
		Node<tData>* ptr = head;
		Node<tData>* tmp = ptr;

		while (ptr != nullptr)
		{
			if (ptr->value == removeData)
			{
				break;
			}
			else
			{
				tmp = ptr;
				ptr = ptr->next;
			}
		}

		if (ptr == nullptr)
		{
			std::cout << "Node data is not found" << std::endl;
		}
		else
		{
			listSize--;
			std::cout << "Node data delete is complete : " << ptr->value << std::endl;
			tmp->next = ptr->next;
			delete ptr;
		}
	}

	void ShowLinkedList()
	{
		Node<tData>* node = head;

		while (node != nullptr)
		{
			std::cout << node->data << "->";
			node = node->next;
		}
		std::cout << std::endl;
	}

	void DeleteList()
	{
		Node<tData>* ptr = head;

		while (ptr != nullptr)
		{
			head = ptr->next;
			delete ptr;
			ptr = head;
		}

		delete head;
		listSize = 0;
		std::cout << "All list delete is complete..." << std::endl;
	}

	void RemoveTail()
	{
		Node<tData>* ptr = head;
		Node<tData>* tmp = new Node<tData>;

		while (ptr->next != nullptr)
		{
			tmp = ptr;
			ptr = ptr->next;
		}
		listSize--;
		tail = tmp;
		tail->next = nullptr;
		delete ptr;
	}

	void RemoveHead()
	{
		Node<tData>* ptr = head;
		head = ptr->next;
		listSize--;
		delete ptr;
	}

	void AddHead(tData addData)
	{
		Node<tData>* ptr = new Node<tData>();

		listSize++;
		ptr->next = head;
		ptr->data = addData;
		head = ptr;
	}

	void AddPosition(int index, tData posData)
	{
		if (listSize < index || 0 > index)
		{
			std::cout << "Not found is index value..." << std::endl;
			return;
		}

		Node<tData>* ptr = head;
		Node<tData>* tmp = ptr;
		Node<tData>* node = new Node<tData>;

		node->data = posData;
		node->next = nullptr;

		for (int nextTail = 0; nextTail < index - 1; nextTail++)
		{
			tmp = ptr;
			ptr = ptr->next;
		}

		tmp->next = node;
		node->next = ptr;
		listSize++;
	}

	void SearchValue(tData searchData)
	{
		Node<tData>* ptr = head;

		int index = 0;
		bool isFind = false;

		while (ptr != nullptr)
		{
			index++;

			if (ptr->data == searchData)
			{
				std::cout << searchData << " <- value is index, " << "be in the" << index << "place" << std::endl;
			}
		}

		if (isFind == false)
		{
			std::cout << "Not found is" << searchData << "value" << std::endl;
		}
	}

	int Size()
	{
		return listSize;
	}
};


int main(void)
{
	// std::cout << "Not Create is Linked List" << std::endl;



	return 0;
}