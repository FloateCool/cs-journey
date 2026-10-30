#ifndef MAIN_H
#define MAIN_H

#define OK 1;
#define ERROR 0;
#define INFEASIBLE -1
#define OVERFLOW -2

typedef int Status;
typedef char ElemType;

typedef struct Lnode
{
	ElemType data;
	struct Lnode* next;
}Lnode, * Linklist;

Status InitList_L(Linklist& L);//初始化一个空链表
int IsEmpty_L(const Linklist& L);//判断该链表是否为空
Status DestoryList_L(Linklist& L);//销毁一个单链表
Status ClearList_L(Linklist& L);//清空一个单链表
int ListLength_L(const Linklist& L);//求单链表的表长
Status GetElem_L(const Linklist& L, int i, ElemType& e);//求单链表第i个位置的元素内容并通过e返回
Lnode* LocateElem_L(const Linklist& L, ElemType e);//按值查找，返回该值所在位置的地址（指针）
int LocateElem_L2(const Linklist& L, ElemType e);//按值查找，返回该数值所在位置的位置序号
Status ListInsert_L(Linklist& L, int i, ElemType e);//在第i结点前插入值为e的结点
Status ListDelete_L(Linklist& L, int i, ElemType &e);//将第i个结点的值删除，并通过e返回被删值
void CreateList_H(Linklist& L, int n);//头插法创建链表
void CreateList_R(Linklist& L, int n);//尾插法创建链表
#endif
