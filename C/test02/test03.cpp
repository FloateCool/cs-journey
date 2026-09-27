#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a = 0,b = 0;
	cout<<"请输入两个整数："<<endl;
	cin>>a>>b;
	
	if(a > b)
	{
		while(a>=b)
		{
			cout<<a<<endl;
			a--;
		}
	}
	else if(a < b)
	{
		while(b>=a)
		{
			cout<<b<<endl;
			b--;
		}
	}
	else
	{
		cout<<a<<endl;
	}

	return 0;
}
