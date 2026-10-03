#include <iostream>
using std::cout;
using std::endl;
using std::cin;

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


int main()
{
	int a;
	cin>>a;
	cout<<fact(a)<<endl;
	return 0;
}
