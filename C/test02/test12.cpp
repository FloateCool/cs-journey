#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
	string line;
	vector<string> line_v;
	while(cin>>line)
	{
		line_v.push_back(line);
	}
	for(auto &i : line_v)
	{
		for(decltype(i.size()) r = 0;r < i.size();r++)
		{
			i[r] = toupper(i[r]);
		}
		cout<<i<<endl;
	}

	return 0;
}

