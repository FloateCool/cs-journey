#include <iostream>
#include <iterator>
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int ia[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	cout<<"版本一"<<endl;

	for(int (&i)[4] : ia)
	{
		for(int r : i)
		{
			cout<<r<<" ";
		}
		cout<<endl;
	}

	cout<<"版本二"<<endl;

	for(size_t i = 0;i < 3;i++)
	{
		for(size_t r = 0;r < 4;r++)
		{
			cout<<ia[i][r]<<" ";
		}
		cout<<endl;
	}

	cout<<"版本三"<<endl;
	for(int (*i)[4] = begin(ia);i != end(ia);i++)
	{
		for(int* r = begin(*i);r != end(*i);r++)
		{
			cout<<*r<<" ";
		}
		cout<<endl;
	}
	return 0;
}
