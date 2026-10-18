#ifndef MAIN_H
#define MAIN_H

#include <vector>
#include <string>

//初始化一个新列表，创建一个空列表
template <typename T>
std::vector<T> InitList()
{
	std::vector<T> new_list;
	return new_list;
}

//判断该线性表是否为空
template <typename T>
bool ListEmpty(const std::vector<T>& L)
{
	if (L.size() != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//将线性表清空，实际实现反回一个空的线性表
template <typename T>
void ClearList(std::vector<T> &L)
{
	std::vector<T> new_vector;
	L = new_vector;
}

//为线性表添加元素
template <typename T,typename U>
void Add(std::vector<T>& L,U a)
{
	L.push_back(T(a));
}

//将线性表中的第i个元素返回给e
template <typename T>
void GetElem(std::vector<T>& L, size_t i , T& e)
{
	e = L[i - 1];
}

//在线性表L中查找与给定值e相等的元素，如果查找成功，返回该元素在表中序号表示成功；否则，返回0表示失败。
template <typename T,typename U>
int LocateElem(std::vector<T>& L,U e)
{
	for (size_t i = 1;i < L.size();i++)
	{
		if (L[i - 1] == e)
		{
			return 1;
		}
	}
	return 0;
}

//在线性表L中的第i个位置插入新元素e
template <typename T,typename U>
void ListInsert(std::vector<T>& L, size_t i,U& e)
{
	L.push_back(L[L.size() - 1]);
	for (size_t t = L.size() - 2;t > i - 1;t--)
	{
		L[t] = L[t - 1];
	}
	L[i - 1] = T(e);
}

//删除线性表L中第i个位置元素，并用e返回其值
template<typename T,typename U>
T ListDelete(std::vector<T>& L, size_t i, U& e)
{
	e = L[i - 1];
	for (size_t t = i - 1;t < L.size() - 2;t++)
	{
		L[t] = L[t+1];
	}
	L.pop_back();
	return e;
}

//返回线性表元素个数
template<typename T>
size_t ListLength(std::vector<T>& L)
{
	return L.size();
}

#endif
