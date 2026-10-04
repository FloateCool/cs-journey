#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::endl;
using std::string;

void conversion(string &s)
{
	for(auto &i : s)
	{
		i = toupper(i);
	}

}


int main()
{
	string s = "Hallo World";
	conversion(s);
	cout<<s<<endl;
	return 0;
}
