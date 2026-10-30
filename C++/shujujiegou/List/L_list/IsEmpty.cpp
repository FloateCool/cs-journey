#include "main.h"

int IsEmpty_L(Linklist& L)
{
	if (L->next)
		return 0;
	else
		return 1;
}
