#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int ia[10] = {0,1,2,3,4,5,6,7,8,9};
	int ia2[10];
	for(int i = 0;i < 10;i++)
	{
		ia2[i] = ia[i];
		cout<<ia2[i]<<" ";
	}
	cout<<endl;

	vector<int> v_int = {0,1,2,3,4,5,6,7,8,9};
	vector<int> v_int2;
	for(auto i : v_int)
	{
		v_int2.push_back(i);
	}

	for(auto i : v_int2)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
