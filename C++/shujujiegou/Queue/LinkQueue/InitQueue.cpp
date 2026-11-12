#include "main.h"
#include <iostream>

Status InitQueue(LinkQueue& Q)
{
	Q.front = Q.rear = new QNode;
	if (!Q.front)
		exit(OVERFLOW);
	Q.front->next = nullptr;
	return OK;
}
