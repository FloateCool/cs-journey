#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string words,n_words;
	cin>>words;
	for(auto &s : words)
	{
		if(!ispunct(s))
		{
			n_words += s;
		}
	}
	cout<<n_words<<endl;
	return 0;
}
