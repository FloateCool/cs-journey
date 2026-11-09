#include "main.h"

Status InitQueue(SqQueue& Q)
{
	Q.base = new QElemType[MAXSIZE];
	if (!Q.base)
		return OVERFLOW;
	Q.front = 0;
	Q.rear = 0;
	return OK;
}
