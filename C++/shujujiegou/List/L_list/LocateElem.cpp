#include "main.h"

Lnode* LocateElem_L(const Linklist L, ElemType e)
{
	Lnode* p = L->next;
	while (p && p->data != e)
		p = p->next;
	return p;
}
