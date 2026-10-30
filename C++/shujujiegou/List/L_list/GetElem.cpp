#include "main.h"

Status GetElem_L(const Linklist& L, int i, ElemType& e)
{
	Lnode* p = L->next;
	int j = 1;
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
	if (!p || j > i)
		return ERROR;
	e = p->data;
	return OK;
}
