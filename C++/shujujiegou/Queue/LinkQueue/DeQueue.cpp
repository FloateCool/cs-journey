#include "main.h"

Status DeQueue(LinkQueue& Q, QElemType& e)
{
	if (Q.front == Q.rear)
		return ERROR;
	QNode * p;
	p = Q.front->next;
	e = Q.front->data;
	Q.front->next = p->next;
	if (Q.rear == p)
		Q.rear = Q.front;
	delete p;
	return OK;
}
