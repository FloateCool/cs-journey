#define True 1
#define False 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100

typedef int Status;
typedef char ElemType;

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    ElemType *elem;
    int length;
} Sqlist;

Status Initlist_Sq(Sqlist *L)//构造一个空的顺序表L
{
    L->elem = (ElemType *)malloc(sizeof(ElemType)*100);//为顺序表分配100个元素的空间
    if(!L->elem)//存储分配失败
        exit(OVERFLOW);
    L->length = 0;//空表长度为0
    return OK;
}

void DestroyList_Sq(Sqlist *L)
{
    if(L->elem)
        free(L->elem);//释放顺序表所占空间
}

void ClearList_Sq(Sqlist *L)
{
    L->length = 0;//将顺序表长度置为0
}
//求线性表长度
int GetLength_Sq(Sqlist L)
{
    return L.length;
}
//判断线性表是否为空
int IsEmpty_Sq(Sqlist L)
{
    if(L.length == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//根据位置i获取相应位置数据元素的内容
int GetElem_Sq(Sqlist L,int i,ElemType *e)
{
    if(i<1 || i>L.length)//判断i值是否合理
    {
        return ERROR;
    }
    e = &(L.elem[i-1]);
    return OK;
}

//在线性表中查找与指定值e相同的数据元素的位置
int LocateElem_Sq(Sqlist L,ElemType e)
{
    for(int i = 0;i < L.length;i++)
    {
        if(L.elem[i] == e)
        {
            return i+1;
        }
    }
    return 0;
}

//在顺序表中第i个位置插入元素e
Status ListInsert_Sq(Sqlist *L,int i,ElemType e)
{
    if(i<1 || i>L->length + 1)
    {
        return ERROR;
    }
    if(L->length >= MAXSIZE)
    {
        return ERROR;
    }
    for(int j = L->length-1;j >= i-1;j--)
    {
        L->elem[j+1] = L->elem[j];
    }
    L->elem[i-1] = e;
    L->length++;
    return OK;
}

//删除顺序表中第i个位置的元素
Status ListDelete_Sq(Sqlist *L,int i)
{
    if(i<1 || i>L->length)
    {
        return ERROR;
    }
    for(int j = i;j < L->length;j++)
    {
        L ->elem[j-1] = L->elem[j];
    }
    L->length--;
    return OK;
}

int main()
{
    return 0;
}


