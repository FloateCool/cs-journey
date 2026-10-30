#include "main.h"
#include <iostream>
using std::cin;

void CreateList_R(Linklist& L, int n)
{
	Lnode* L = new Lnode;
	L->next = nullptr;
	Lnode* r = L;
	for (int i = 0;i < n;i++)
	{
		Lnode* p;
		cin >> p->data;
		p->next = nullptr;
		r->next = p;
		r = p;
	}
}
