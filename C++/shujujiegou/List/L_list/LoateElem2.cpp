#include "main.h"

int LocateElem_L2(const Linklist& L, ElemType e)
{
	Lnode* p = L->next;
	int i = 1;
	while (p && p->data != e)
	{
		p = p->next;
		i++;
	}
	if (!p)
		return 0;
	return i;
}
