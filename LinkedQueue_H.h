#ifndef LINKEDQUEUE
#define LINKEDQUEUE

typedef char itemType;

struct Node
{
	itemType* data;

	Node* link;
}

class QueueType
{
public:
	QueueType();
	~QueueType();
	void makeEmpty();
	bool isEmpty();
	bool isFull();
	void enQueue(itemType item);
	void deQueue(itemType item);

private:
	ItemType* items;
	Node* front;
	Node* rear;

}

#endif