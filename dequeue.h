/*
 * Name: YOUR NAME
 * Dequeue Class Definition
 * Course: CSI218 (Spring 2015)
 * Date: April 13, 2015
 * Description: Dequeue template class definition declaring
 *				data members and member functions for type "T".
 */

#ifndef HISTORY_H
#define HISTORY_H

// Class represents a queue to/from which elements
// can be added/removed from both ends.
template<class T>
class Dequeue
{
public:
	// Constructors
	Dequeue();  // no size since can grow

	// Copy constructor
	Dequeue(const Dequeue<T> &otherHistory);

	// Assignment operator
	Dequeue<T> &operator =(
		const Dequeue<T> &otherHistory);

	// Destructor
	~Dequeue();

	// Accessors

	bool isEmpty() const;

	// Mutators

	void addBeginning(const T &val);
	void addEnd(const T &val);
	T removeBeginning();
	T removeEnd();

	void clear();

private:
	struct Node
	{
		T info;
		Node *nextP, *prevP;
	};

	Node *firstP;  // point to first node (head)
	Node *lastP;   // and last node (tail) of list

	// Append items to end of dequeue (make
	// this "public" if useful to "client").
	void append(const Dequeue<T> &otherHistory);
};

#endif