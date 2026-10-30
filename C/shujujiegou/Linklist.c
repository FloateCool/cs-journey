#define True 1
#define False 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#include <stdio.h>
#include <stdlib.h>

typedef int Status;
typedef char ElemType;

typedef struct Lnode
{
    ElemType data;
    struct Lnode *next;
}Lnode,*Linklist;

//初始化一个空链表
Status InitList_L(Linklist *L)
{
    *L = (Linklist)malloc(sizeof(Lnode));
    (*L)->next = NULL;
    return OK;
}

//判断链表是否为空
int IsEmpty_L(Linklist L)
{
    if(L->next)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

//销毁单链表
Status DestroyList_L(Linklist *L)
{
    Lnode *p;
    while(*L)
    {
        p = *L;
        *L = (*L)->next;
        free(p);
    }
    return OK;
}

//清空链表
Status ClearList_L(Linklist *L)
{
    Lnode *p,*q;
    p = (*L)->next;
    while(p)
    {
        q = p->next;
        free(p);
        p = q;
    }
    (*L)->next = NULL;
    return OK;
}

//求单链表的表长
int ListLength_L(Linklist L)
{
    Lnode *p;
    p = L->next;
    int i = 0;
    while(p)
    {
        i++;
        p = p->next;
    }
    return i;
}

//获取线性表中某个数据元素的内容，并通过e返回
Status GetElem_L(Linklist L,int i,ElemType *e)
{
    Lnode *p;
    p = L->next;
    int j = 1;
    while(p && j < i)
    {
        p = p->next;
        j++;
    }
    if(!p || j > i)
    {
        return ERROR;
    }
    *e = p->data;
    return OK;    
}

//按值查找，根据指定数据获取该数据所在的位置（地址）
Lnode *LocateElem_L(Linklist L,ElemType e)
{
    Lnode *p;
    p = L->next;
    while(p && p->data != e)
        p=p->next;
    return p;
}

//按值查找，根据指定数据获取该数据位置序号
int LocateElem_L2(Linklist L,ElemType e)
{
    Lnode *p;
    p = L->next;
    int j = 1;
    while(p && p->data != e)
    {
        p = p->next;
        j++;
    }
    if(p)
        return j;
    else
        return 0;
}

//在第i个结点前插入值为e的新结点
Status ListInsert_L(Linklist *L,int i,ElemType e)
{
    Lnode *p = *L;
    Lnode *s;
    int j = 0;
    while(p && j < i-1)
    {
        p=p->next;
        j++;
    }
    if(!p || j>i-1)
    {
        return ERROR;
    }
    s = (Lnode *)malloc(sizeof(Lnode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;

}

//将第i个结点删除，并用e返回被删除结点的值
Status ListDelete_L(Linklist *L,int i,ElemType *e)
{
    Lnode *p = *L;
    int j = 0;
    while(p->next && j < i -1)
    {
        p = p->next;
        j++;
    }
    if(!(p->next) || j > i-1)
        return ERROR;
    Lnode *q = p->next;
    p->next = q->next;
    *e = q->data;
    free(q);
    return OK;
}
//头插法建立链表
void CreateList_H(Linklist *L,int n)
{
    *L = (Linklist)malloc(sizeof(Lnode));
    (*L)->next = NULL;
    for(int i = 0;i<n;i++)
    {
        Lnode *p = (Lnode *)malloc(sizeof(Lnode));
        scanf("%c",&p->data);
        p->next = (*L)->next;
        (*L)->next = p;
    }
}

//尾插法建立链表
void CreateList_R(Linklist *L,int n)
{
    *L = (Linklist)malloc(sizeof(Lnode));
    (*L)->next = NULL;
    Lnode *r = *L;
    for(int i = 0;i < n;i++)
    {
        Lnode *p = (Lnode *)malloc(sizeof(Lnode));
        scanf("%c",&p->data);
        p->next = NULL;
        r->next = p;
        r = p;
    }
}

int main()
{
    return 0;
}
