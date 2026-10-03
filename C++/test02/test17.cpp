#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<unsigned> scores(11,0);
	unsigned grade;
	while(cin>>grade)
	{
		unsigned time = 0;
		for(auto i = scores.begin();i != scores.end();i++)
		{
			if(grade/10 == time)
			{
				(*i)++;
				break;
			}
			time++;
		}
	}

	for(auto i : scores)
	{
		cout<<i<<" ";
	}
	return 0;
}
