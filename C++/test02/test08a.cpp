#include <iostream>
#include <string>
using std::string;
using std::getline;
#include <cctype>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string words;
	getline(cin,words);
	for(auto &r : words)
	{
		if(!isspace(r))
		{
			r = 'X';
		}
	}

	cout<<words<<endl;
	return 0;
}
