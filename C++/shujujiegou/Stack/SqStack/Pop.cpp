#include "main.h"

Status Pop(SqStack& S, SElemType& e)
{
	if (S.top == S.base)
	{
		return ERROR;
	}
	--S.top;
	e = *S.top;
	return OK;
}
