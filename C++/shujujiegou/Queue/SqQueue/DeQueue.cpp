#include "main.h"

Status DeQueue(SqQueue& Q, QElemType& e)
{
	if (Q.front == Q.rear)
		return ERROR;
	e = Q.front;
	Q.front = Q.rear;
	Q.front = (Q.front + 1) % MAXSIZE;
	return OK;
}
