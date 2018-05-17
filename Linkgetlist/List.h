#pragma once
#include "Library.h"
// 4 elements nullptr, lastptr, firstptr, nextptr. we get the address from each of the previous. 5 technically if you count the current pointer to the next pointer until the last from the first.
// it's better not to minus at the last element to get to a previous element rather better to use a traverse function
//*
template <typename T>
class List {
private:
	class Node {
		T date;
		Node* nextPtr;
	public:
		Node(T date) {
			this->date = date;
			this->nextPtr = nullptr;
		}
		firstPtr;
		lastPtr;
		size_t count;
		Node.data;
		void add_front(T data);
		void add_last(T data);
	public:
		List {
			firstPtr = lastPtr = nullptr;
		}
			void print_listofdata();
			bool search(T)
			T& operator[](int index)
		size_t size() { return count; }
	};
};
//*