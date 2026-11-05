#include "main.h"

Status Push(SqStack& S, SElemType e)
{
	if (S.top - S.base == S.stacksize)
		return ERROR;
	*S.top = e;
	S.top++;
	return OK;
}
