#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n;
	vector<int> int_n;
	while(cin>>n)
	{
		int_n.push_back(n);
	}

	if(int_n.size() % 2 != 0)
	{
		for(decltype(int_n.size()) r = 0;r < int_n.size() / 2 + 1;r++)
		{
			cout<<int_n[r] + int_n[int_n.size() - 1 - r]<<endl;
		}
	}
	else if(int_n.size() % 2 == 0)
	{
		for(decltype(int_n.size()) r = 0;r < int_n.size() / 2;r++)
		{
			cout<<int_n[r] + int_n[int_n.size() - 1 -r]<<endl;
		}
	}
	return 0;
}
