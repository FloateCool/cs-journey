#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> int_n(10,5);
	for(auto i = int_n.begin();i != int_n.end();i++)
	{
		cout<<*i * 2<<" ";
	}
	return 0;
}
