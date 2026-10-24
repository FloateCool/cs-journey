#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;

vector<string> read(const string& filename)
{
	vector<string> lines;
	ifstream in(filename);

	if(in)
	{
		string line;
		while(getline(in,line))
		{
			lines.push_back(line);
		}
	}
	else
	{
		std::cerr<<"无法打开文件"<<endl;
	}
	return lines;
}

int main()
{
	string filename = "test01.cpp";
	vector<string> result = read(filename);

	if(!result.empty())
	{
		cout<<"成功读取到"<<result.size()<<"行"<<endl;
		for(const string& str : result)
		{
			cout<<str<<endl;
		}
	}
	else
	{
		cout<<"空的"<<endl;
	}

	return 0;
}
