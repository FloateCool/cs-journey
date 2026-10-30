#include "main.h"

Status ListDelete_L(Linklist& L, int i, ElemType& e)
{
	Lnode* p = L;
	int j = 0;
	while (p && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (!(p->next) || j > i - 1)
		return ERROR;
	Lnode* q = p->next;
	e = q->data;
	p->next = q->next;
	delete q;
	return OK;
}
