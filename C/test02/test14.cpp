#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	vector<int> v2(10);
	for(auto i = v2.begin();i != v2.end();i++)
	{
		cout<<*i;
	}
	cout<<endl;

	vector<int> v3(10,42);
	for(auto i = v3.begin();i != v3.end();i++)
	{
		cout<<*i;
	}
	cout<<endl;

	vector<int> v4{10};
	for(auto i = v4.begin();i != v4.end();i++)
	{
		cout<<*i;
	}
	cout<<endl;

	vector<int> v5{10,42};
	for(auto i = v5.begin();i != v5.end(); i++)
	{
		cout<<*i;
	}
	cout<<endl;

	vector<string> v6{10};
	for(auto i = v6.begin();i != v6.end(); i++)
	{
		cout<<*i;
	}
	cout<<endl;

	vector<string> v7(10,"hi");
	for(auto i = v7.begin();i != v7.end(); i++)
	{
		cout<<*i;
	}
	cout<<endl;
	return 0;
}
