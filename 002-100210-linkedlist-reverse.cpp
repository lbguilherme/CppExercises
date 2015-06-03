#ifndef ANSWER
// Extra Rules:
// - Only member functions can be defined on LinkedList<T> and LinkedListNode<T>.
//   No new member variables can be added

template <typename T>
class LinkedListNode {
	T _value;
	LinkedListNode<T>* _next = nullptr;
public:

	// YOUR CODE HERE

};

template <typename T>
class LinkedList {
	LinkedListNode<T>* _head = nullptr;
	LinkedListNode<T>* _tail = nullptr;
	unsigned _size = 0;
public:

	// YOUR CODE HERE

};

///////////////////////////////////////////////////////////////////////////////////
// BEGINNING OF THE READ-ONLY SECTION
///////////////////////////////////////////////////////////////////////////////////
#endif

#include "internal.hpp"

void test1() {
	for (int i = 0; i < 200; ++i) {
		int size = rand() % 1000;
		int* data = new int[size];
		
		LinkedList<int> list;
		for (int j = 0; j < size; ++j) {
			ASSERT(list.size() == j);
			list.append(data[j] = rand());
			ASSERT(list.size() == j+1);
		}
		ASSERT(list.size() == size);
		
		for (int k = 0; k < 20; ++k) {
			int j = 0;
			list.each([&](int& value){
				ASSERT(value == data[j]);
				ASSERT(j < size);
				ASSERT(list.size() == size);
				++j;
			});
			ASSERT(j == size);
			ASSERT(list.size() == size);
		}
		
		// NEW FROM PREVIOUS EXERCISE:
		auto reversed = list.reverse();
		
		for (int k = 0; k < 20; ++k) {
			int j = 0;
			reversed.each([&](int& value){
				ASSERT(value == data[size-j-1]);
				ASSERT(j < size);
				ASSERT(reversed.size() == size);
				++j;
			});
			ASSERT(j == size);
			ASSERT(reversed.size() == size);
		}
		// END NEW
		
		delete[] data;
	}
}

MAIN({test1();})
