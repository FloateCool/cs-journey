#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fact()
{
	static int a = -1;
	a++;
	return a;
}

int main()
{
	for(int i = 0;i < 10;i++)
	{
		cout<<fact()<<endl;
	}
	return 0;
}
