#include <iostream>
#include "main.h"
using namespace std;

int main()
{
	//初始化一个新的线性表
	vector<string> new_list = InitList<string>();

	//判断线性表是否是空列表
	cout << ListEmpty(new_list) << endl;

	//将线性表清空，实际实现反回一个空的线性表
	ClearList(new_list);

	//在线性表后添加一个元素
	string ch = "A";
	for (size_t i = 0;i < 10;i++)
	{
		Add(new_list, ch);
	}
	cout << new_list[0] << endl;

	//取得线性表中位置为i的元素
	string e;
	GetElem(new_list, 1, e);
	cout << e << endl;

	//在线性表L中查找与给定值e相等的元素，如果查找成功，返回该元素在表中序号表示成功；否则，返回0表示失败。
	cout << LocateElem(new_list, "hello")<< endl;

	//在线性表L中的第i个位置插入新元素e
	ListInsert(new_list, 2, "world");

	string a;
	//删除线性表L中第i个位置元素，并用a返回其值
	cout << ListDelete(new_list, 2, a) << endl;;

	//返回线性表元素个数
	cout<<ListLength(new_list)<<endl;

	return 0;
}
