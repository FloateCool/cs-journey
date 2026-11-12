#include "main.h"

Status DestroyQueue(LinkQueue& Q)
{
	while (Q.front)
	{
		Qnode* p;
		p = Q.front->next;
		delete Q.front;
		Q.front = p;
	}
	return OK;
}
