#include "main.h"

Status ListInsert_L(Linklist& L, int i, ElemType e)
{
	Lnode* p = L;
	Lnode* s;
	int j = 0;
	while (p && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (!p || j > i - 1)
		return ERROR;
	s = new Lnode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}
