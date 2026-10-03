#include <iostream>
#include <vector>
#include <iterator>
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int arr_int[] = {1,2,3,4,5,6,7,8};
	vector<int> ve_int(begin(arr_int),end(arr_int));
	for(auto i : ve_int)
	{
		cout<<i<<" ";
	}
	cout<<endl;

	vector<int> ve_int2(5,10);
	int arr_int2[ve_int2.size()];
	for(size_t i = 0;i < ve_int2.size();i++)
	{
		arr_int2[i] = ve_int2[i];
	}

	for(auto i : arr_int2)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
