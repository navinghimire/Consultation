/*
 * Name: YOUR NAME
 * Dequeue Member Function Definitions
 * Course: CSI218 (Spring 2015)
 * Date: April 13, 2015
 * Description: Dequeue member function definitions.
 *				Linked list implementation, keeping track
 *				of list with pointers to both first node
 *				and last node in list.
 */

#ifndef HISTORY_CPP
#define HISTORY_CPP

#include <iostream>
#include "dequeue.h"
using namespace std;

// Dequeue member function definitions.

// Constructors

template<class T>
Dequeue<T>::Dequeue()
{
	// Initially empty.
	firstP = NULL;
	lastP = NULL;
}

// Copy constructor
template<class T>
Dequeue<T>::Dequeue(const Dequeue<T> &otherHistory)
{
	// Initially empty.
	firstP = NULL;
	lastP = NULL;

	// Copy list of other dequeue.
	append(otherHistory);
}

// Destructor
template<class T>
Dequeue<T>::~Dequeue()
{
	clear();  // pointer reset once cleared
}

// Assignment operator
template<class T>
Dequeue<T> &Dequeue<T>::operator =(
				const Dequeue<T> &otherHistory)
{
	// Avoid copying if assigning object to self.
	if (this != &otherHistory)
	{
		// Copy non-dynamic array members (none here).

		// Empty current list.
		clear();

		// Copy list of other dequeue.
		append(otherHistory);
	}

	// Return self.
	return *this;
}

// Accessors

template<class T>
bool Dequeue<T>::isEmpty() const
{
	return firstP == NULL;
}

// Mutators

template<class T>
void Dequeue<T>::addBeginning(const T &val)
{
	// Allocate new node and store data.
	Node *newNodeP = new Node;
	newNodeP->info = val;
	newNodeP->prevP = NULL;

	// COMPLETE THIS FUNCTION.
}

template<class T>
void Dequeue<T>::addEnd(const T &val)
{
	// Allocate new node and store data.
	Node *newNodeP = new Node;
	newNodeP->info = val;
	newNodeP->nextP = NULL;

	// COMPLETE THIS FUNCTION.
}

template<class T>
T Dequeue<T>::removeBeginning()
{
	if (firstP == NULL)
	{
		cerr << "Cannot remove from beginning of empty dequeue" << endl;
		return T();
	}

	// COMPLETE THIS FUNCTION.
	return T();  // temporary value
}

template<class T>
T Dequeue<T>::removeEnd()
{
	if (firstP == NULL)
	{
		cerr << "Cannot remove from end of empty dequeue" << endl;
		return T();
	}

	// COMPLETE THIS FUNCTION.
	return T();  // temporary value
}

// Remove all items
template<class T>
void Dequeue<T>::clear()
{
	while (firstP != NULL)
	{
		Node *deleteP = firstP;
		firstP = firstP->nextP;
		delete deleteP;
	}

	// After loop, firstP will be NULL.

	// Also set reset pointer to last node.
	lastP = NULL;
}

// Add all items from other dequeue
template<class T>
void Dequeue<T>::append(const Dequeue<T> &otherHistory)
{
	for (Node *traverseP = otherHistory.firstP;
			traverseP != NULL;
			traverseP = traverseP->nextP)
		addEnd(traverseP->info);  // maintain original order
}

#endif