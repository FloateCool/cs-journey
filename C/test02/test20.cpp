#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {6,7,8,9,10};
	if(&arr1[0] == &arr2[0])
	{
		cout<<"arr1 = arr2"<<endl;
	}
	else if(&arr1[0] < &arr2[0])
	{
		cout<<"arr1 < arr2"<<endl;
	}
	else
	{
		cout<<"arr2 < arr1"<<endl;
	}

	vector<int> v_int1{1,3,5,7,8};
	vector<int> v_int2{9,8,6,5,2};
	if(v_int1 == v_int2)
	{
		cout<<"v_int1 = v_int2"<<endl;
	}
	else if(v_int1 < v_int2)
	{
		cout<<"v_int1 < v_int2"<<endl;
	}
	else
	{
		cout<<"v_int2 < v_int1"<<endl;
	}


	return 0;
}
