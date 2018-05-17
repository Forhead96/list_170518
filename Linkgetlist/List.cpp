#include "List.h"
//we need to make an temporary element that does the decrement -- operation, because we need to subtract every element then making just a normal destructor that destroys our three ptrs objects. allign next ptr to the 3rd element
// allign current ptr to the second element and allign first ptr to the first element so our objects specify 3 | 2 | 1. in that order
template<typename T>
void List<T>::add_last(T data)
{
	if (count == 0)
	{
		firstPtr = new Node(data)
			lastPtr = firstPtr;
	}
	else
	{
		lastPtr->nextptr = new Node(data)
			lastPtr = nextPtr;
	}
	count++;
}
template<typename T>
void List<T>::add_front(T data)
{
	if (size == 1)
	{
		firstPtr = new Node(data);
		firstPtr = lastPtr;
	}
	else
	{
		Node *element = new Node(data)
		element->nextPtr = firstPtr;
		firstPtr = element;
	}
	count++;
}
template<typename T>
void List<T>::Node::print_listofdata()
{
	Node *curPtr = firstPtr;
	do
	{
		cout << *curPtr->data << endl;
		*curPtr = *curPtr->nextPtr;
	} while (*curPtr->nextPtr != firstPtr)
}
template<typename T>
List<T>::~List()
{
	Node *curPtr;
	Node n = firstPtr;
	*curPtr = firstPtr;
	delete firstPtr; // first gets deleted then the current pointer is last and that's how we get it i understand
  while (n.nextPtr != lastPtr)
	{
		*curPtr = n->nextPtr;
		n = *curPtr;
		delete *curPtr;
	}
}
template<typename T>
void List<T>::removefirst()
{
	Node *curPtr = firstPtr->nextPtr;
	delete firstPtr;
	firstPtr = *curPtr;
	count--;
}
template<typename T>
void List<T>::removelast()
{
	if (size == (1))
	{
		delete firstPtr;
		firstPtr = nullptr;
		lastPtr = nullptr;
	}
	else
	{
		Node *curPtr = firstPtr;
		while (*curPtr->nextPtr != lastPtr)
		{
			*curPtr->nextPtr = nullptr;
			lastPtr = *curPtr;
			delete lastPtr;
		}
	}
	template<typename T>
	bool List<T>::search()
	{
		for (int i = 0; i < 5; i++);
		if(firstPtr == true)
		{
			firstPtr(5);
			cout << firstPtr << endl;
		}
		if(lastPtr == true)
		{
			lastPtr(5);
			cout << lastPtr << endl;
		}
		if(nextPtr == true)
		{
			nextPtr(5);
			cout << nextPtr << endl;
		}
		if(*curPtr == true)
		{
			*curPtr(5);
			cout << *curPtr << endl;
		}
		if (*curPtr != true)
		{
			cout << "No number found" << endl;
		}
		if (firstPtr != true)
		{
			cout << "No number found" << endl;
		}
		if (lastPtr != true)
		{
			cout << "No number found" << endl;
		}
		if (nextPtr != true)
		{
			cout << "No number found" << endl;
		}
		else
		{
			firstPtr = false;
			lastPtr = false;
			nextPtr = false;
			*curPtr = false;
		}
		count++;
	}
}

