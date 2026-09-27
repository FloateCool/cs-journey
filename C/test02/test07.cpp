#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
#include <cctype>

int main()
{
	string words;
	getline(cin,words);
	for(decltype(words.size()) i = 0;i < words.size();i++)
	{
		if(!isspace(words[i]))
		{
			auto &r = words[i];
			r = 'X';
		}
	}
	cout<<words<<endl;
	return 0;
}
