#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define MAXSIZE 100

#include <stdio.h>
#include <stdlib.h>

typedef int Status;
typedef int SElemType;

typedef struct{
    SElemType *base;//栈底指针
    SElemType *top;//栈顶指针
    int stacksize;//栈可用最大容量
}SqStack;

Status InitStack(SqStack *S)//构造一个空栈
{
    S->base = (SElemType *)malloc(sizeof(SElemType)*MAXSIZE);//为栈分配MAXSIZE个元素空间
    if(!S->base)
        exit(OVERFLOW);
    S->top = S->base;
    S->stacksize = MAXSIZE;
    return OK;
}

Status StackEmpty(SqStack S)//判断栈是否为空
{
    if(S.top == S.base)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int StackLength(SqStack S)//求栈的长度
{
    return S.top - S.base;
}

Status ClearStack(SqStack S)//清空栈
{
    if(S.base)
    {
        S.top = S.base;
        return OK;
    }
    return ERROR;
}

Status DestroyStack(SqStack *S)//销毁顺序栈
{
    if(S->base)
    {
        free(S->base);
        S->stacksize = 0;
        S->top = S->base = NULL;
    }
    return OK;
}

Status Push(SqStack *S,SElemType e)//入栈
{
    if(S->top - S->base == S->stacksize)
    {
        return ERROR;
    }
    *S->top = e;
    S->top++;
    return OK;
}

Status Pop(SqStack *S,SElemType *e)//出栈
{
    if(S->top == S->base)
    {
        return ERROR;
    }
    S->top--;
    *e = *(S->top);
    return OK;
}

int main()
{
	return 0;
}
