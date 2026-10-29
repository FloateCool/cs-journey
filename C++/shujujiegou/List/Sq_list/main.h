#ifndef MAIN_H
#define MAIN_H

#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define SQ_OVERFLOW -2
#define SQ_MAXSIZE 100

typedef int Status;
typedef char ElemType;

class Sqlist {
public:
	ElemType* elem;
	int length;
};

Status Initlist_Sq(Sqlist& L);//初始化一个顺序表
void DestroyList_Sq(Sqlist& L);//删除一个顺序表
void ClearList_Sq(Sqlist& L);//清空一个顺序表
int GetLength_Sq(Sqlist& L);//得到一个顺序表的长度
int IsEmpty_Sq(Sqlist& L);//判断该顺序表是否为空
Status GetElem_Sq(Sqlist& L, int i, ElemType& e);//得到顺序表中第i个元素的元素值
int LocateElem_Sq(Sqlist& L, ElemType& e);//寻找和e值相同的数据位置
Status ListInsert_Sq(Sqlist& L, int i, ElemType& e);//在位置i中插入e
Status ListDelete_Sq(Sqlist& L, int i);//删除位置i中的元素
#endif
