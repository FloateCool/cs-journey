#include <iostream>
using std::cout;
using std::endl;

void swap(int &a,int &b)
{
	int temp = b;
	b = a;
	a = temp;
}

int main()
{
	int a = 1,b = 2;
	cout<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<a<<" "<<b<<endl;

	return 0;
}
