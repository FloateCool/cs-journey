#include "main.h"

Linklist Connect(Linklist Ta,Linklist Tb)
{
	p = Ta->next;
	Ta->next=Tb->next->next;
	delete Tb->next;
	Tb->next=p;
	return Tb;
}
