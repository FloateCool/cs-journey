#include <iostream>
#include <iterator>
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int *arr_begin = begin(arr);
	int *arr_end = end(arr);

	while(arr_begin != arr_end)
	{
		*arr_begin = 0;
		arr_begin++;
	}

	for(auto i : arr)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
