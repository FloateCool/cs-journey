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

	for(decltype(int_n.size()) r = 0;r < int_n.size();r++)
	{
		if(r+1 < int_n.size())
		{
			cout<<int_n[r] + int_n[r + 1]<<endl;
		}
	}
	return 0;
}
