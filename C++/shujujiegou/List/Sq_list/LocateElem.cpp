#include "main.h"

int LocateElem_Sq(Sqlist& L, ElemType& e)
{
	for (int i = 0;i < L.length - 1;i++)
	{
		if (L.elem[i] == e)
			return i + 1;
	}
	return 0;
}
