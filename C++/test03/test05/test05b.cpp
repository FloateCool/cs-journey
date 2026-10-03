#include "test05a.h"

int fact(int a)
{
	int total = 1;
	while(a > 1)
	{
		total *= a;
		a--;
	}
	return total;
}
