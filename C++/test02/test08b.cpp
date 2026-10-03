#include <iostream>
#include <cctype>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s;
	std::getline(cin,s);
	decltype(s.size()) i = 0;
	while(i < s.size())
	{
		if(!isspace(s[i]))
		{
			auto &r = s[i];
			r = 'X';
		}
		i++;
	}
	cout<<s<<endl;
	return 0;
}
