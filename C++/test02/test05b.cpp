#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string a,b;
	cin>>a>>b;
	if(a < b)
	{
		cout<<a<<endl;
	}
	else if(a > b)
	{
		cout<<b<<endl;
	}
	return 0;
}
