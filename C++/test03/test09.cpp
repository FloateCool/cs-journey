#include <iostream>
#include <initializer_list>
using std::cout;
using std::endl;
using std::initializer_list;

int total(initializer_list<int> int_zer)
{
	int num = 0;
	for(auto i : int_zer)
	{
		num += i;
	}
	return num;
}


int main()
{
	cout<<total({11,25,445})<<endl;
	return 0;
}
