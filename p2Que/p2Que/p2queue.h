#ifndef __P2QUEUE_H__
#define __P2QUEUE_H__

#include "dynarray.h"
#include "p2LinkedList.h"
#include <assert.h>

typedef unsigned int uint;


// Dynamic Array Queue

template<class T>

class DynQueue {
private:
	DynArray<T> buffer;

public:
	DynQueue(){}
	DynQueue(const DynQueue& queue) : buffer(queue.buffer){}
	virtual ~DynQueue(){}

	// Size ---
	const uint size() const {
		return buffer.n_size();
	}

	// Pop ---
	void pop() {
		buffer.pop(buffer[buffer.n_size() - 1]);
	}

	// Peek ---
	const T& peek() const {
		return buffer[buffer.n_size() - 1];
	}

	//Push_Back ---
	void Push_Back(const T& data) {
		buffer.push_front(data);
	}

	// Push_Front ---
	void Push_Front(const T& data) {
		buffer.push_back(data);
	}
	
};

// Linked List Queue

template<class T>

class ListedQueue {
private:
	List<T> buffer;

public:
	ListedQueue(){}
	ListedQueue(const ListedQueue& queue) : buffer(queue.buffer) {}
	virtual ~ListedQueue(){}

	// Size ---
	const uint size() {
		return buffer.size();
	}

	// Peek ---
	const T& peek() {
		return buffer.end()->data;
	}

	// Clear ---
	void Clear() {
		buffer.Clear();
	}

	// Pop ---
	void pop() {
//		buffer.Erase(buffer.size() - 1);
	}

	// Push_Front ---
	void Push_Front(const T& data) {
		buffer.Push_Front(data);
	}

	// Push_Back ---
	void Push_Back(const T& data) {
		buffer.Push_Back(data);
	}

};

#endif