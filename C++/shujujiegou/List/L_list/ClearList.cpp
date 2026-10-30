#include "main.h"

Status ClearList_L(Linklist& L)
{
	Lnode* p,*q;
	p = L->next;
	while (p)
	{
		q = p->next;
		delete p;
		p = q;
	}
	L->next = nullptr;
	return OK;
}
