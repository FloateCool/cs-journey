#include <iostream>
#include <string>
#include <cstring>
using std::string;
using std::cout;
using std::endl;

int main()
{
	string st1 = "Hello";
	string st2 = "Hallo";
	if(st1 > st2)
	{
		cout<<st1<<endl;
	}
	else if(st1 < st2)
	{
		cout<<st2<<endl;
	}
	else
	{
		cout<<st1<<endl;
	}

	const char ch1[] = "lly";
	const char ch2[] = "dsg";

	if(strcmp(ch1,ch2) > 0)
	{
		cout<<ch1<<endl;
	}
	else if(strcmp(ch1,ch2) < 0)
	{
		cout<<ch2<<endl;
	}
	else
	{
		cout<<ch1<<endl;
	}

	return 0;
}
