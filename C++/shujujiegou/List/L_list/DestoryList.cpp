#include "main.h"

Status DestoryList(Linklist& L)
{
	Lnode* p;
	while (L)
	{
		p = L;
		L = L->next;
		delete p;
	}
	return OK;
}
