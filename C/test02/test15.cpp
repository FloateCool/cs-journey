#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<string> ve_string;
	string n;
	while(cin>>n)
	{
		ve_string.push_back(n);
	}

	for(auto i = ve_string.begin();i != ve_string.end();i++)
	{
		for(char &r : *i)
		{
			cout<<(char)toupper(r);
		}
		cout<<" ";
	}
	return 0;
}
