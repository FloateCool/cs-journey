#include "main.h"

Status DestoryStack(SqStack& S)
{
	if (S.base)
	{
		delete S.base;
		S.stacksize = 0;
		S.top = S.base = nullptr;
		return OK;
	}
}
