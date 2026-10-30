#include "main.h"

Status InitList_L(Linklist& L)
{
	L = new Lnode;
	L->next = nullptr;
	return OK;
}
