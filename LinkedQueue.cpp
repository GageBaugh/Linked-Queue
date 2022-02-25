#include "LinkedQueue_H.h"
using namespace std;

QueueType::QueueType()
{
	Node* front = nullptr;
	Node* rear = nullptr;
}

bool QueueType::isEmpty()
{
	if (front == nullptr && rear == nullptr)
		return true;
	else
		return false;
}

bool QueueType::isFull()
{
	if (front != nullptr && rear != nullptr)
		return true;
	else
		return false;
}

void QueueType::enQueue(itemType data)
{
	Node* pointer = new Node();
	pointer->data = data;
	pointer->link = nullptr;

	if (front == nullptr)
	{
		front = pointer;
		rear = pointer;
	}
	else
	{
		rear->link = pointer;
		rear = pointer;
	}
}

void QueueType::deQueue(itemType data)
{

}