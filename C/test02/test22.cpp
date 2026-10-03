#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

int main()
{
	char ch1[] = "llysdsg";
	char ch2[] = "llysdsb";
	char ch3[100];
	strcpy(ch3,ch1);
	strcat(ch3,ch2);
	cout<<ch3<<endl;

	return 0;
}
