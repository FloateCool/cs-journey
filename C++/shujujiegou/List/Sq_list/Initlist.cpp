#include "main.h"
#include <cstdlib>
//构造一个空的顺序表
Status Initlist_Sq(Sqlist& L)
{
	L.elem = new ElemType(SQ_MAXSIZE);
	if (!L.elem)
		exit(SQ_OVERFLOW);
	L.length = 0;
	return OK;
}
