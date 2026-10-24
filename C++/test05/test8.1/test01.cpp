#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

std::istream& read(std::istream& is)
{
	std::string s;
	while(is>>s)
	{
		cout<<s<<" ";
	}
	cout<<endl;
	is.clear();
	return is;
}


int main()
{
	read(cin);
	return 0;
}
