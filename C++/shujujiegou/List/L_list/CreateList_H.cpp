#include "main.h"
#include <iostream>
using std::cin;

void CreateList_H(Linklist& L, int n)
{
	L = new Lnode;
	L->next = nullptr;
	for (int i = 0;i < n;i++)
	{
		Lnode* p = new Lnode;
		cin >> p->data;
		p->next = L->next;
		L->next = p;
	}
}
