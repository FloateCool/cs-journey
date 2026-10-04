#include <iostream>
#include <cctype>
#include <string>
using std::cout;
using std::endl;
using std::string;

bool panduan(const string s)
{
	for(auto i : s)
	{
		if(isupper(i))
		{
			return true;
		}
	}
	return false;
}

int main()
{
	if(panduan("Hallo World"))
	{
		cout<<"大大"<<endl;
	}
	else
	{
		cout<<"小小"<<endl;
	}
	return 0;
}
