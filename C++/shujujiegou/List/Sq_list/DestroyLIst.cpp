#include "main.h"

inline void DestroyList_Sq(Sqlist& L)
{
	if (L.elem)
		delete L.elem;
}
