#include "main.h"
#include <iostream>

Status EnQueue(LinkQueue& Q, QElemType e)
{
	QNode* p;
	p = new QNode;
	if (!p)
		exit(I_OVERFLOW);
	p->next = nullptr;
	p->data = e;
	Q.rear->next = p;
	Q.rear = p;
	return OK;
}
