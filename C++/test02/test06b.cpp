#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string a,b;
	cin>>b;
	while(cin>>a)
	{
		b = b + " " + a;
	}
	cout<<b<<endl;
	return 0;
}
