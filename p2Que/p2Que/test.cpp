#include "p2queue.h"
#include <stdio.h>

int main() {
	DynQueue<int> dynqueue;
	ListedQueue<int> listqueue;

	printf("Dynamic Array Queue:\n  ");

	dynqueue.Push_Front(10);
	dynqueue.Push_Back(5);
	dynqueue.Push_Back(7);
	dynqueue.pop();

	printf("%d %d", dynqueue.peek(), dynqueue.size());

	dynqueue.pop();

	printf(" %d %d", dynqueue.peek(), dynqueue.size());

	printf("\n\nLinked List Queue:\n  ");

	listqueue.Push_Front(10);
	listqueue.Push_Back(5);
	listqueue.Push_Back(7);
	listqueue.pop();

	printf("%d %d", listqueue.peek(), listqueue.size());

	listqueue.pop();

	printf(" %d %d", listqueue.peek(), listqueue.size());

	getchar();
	return 0;
}