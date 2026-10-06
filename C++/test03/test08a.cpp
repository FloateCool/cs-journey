#include <iostream>
using std::cout;
using std::endl;

int bijiao(int* a,int b)
{
	if(*a > b)
	{
		return *a;
	}
	else if(*a < b)
	{
		return b;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int a = 1,b = 2;
	cout<<bijiao(&a,b)<<endl;
	return 0;
}
