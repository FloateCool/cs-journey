#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define MAXQSIZE 100

#include <stdio.h>
#include <stdlib.h>

typedef int Status;
typedef int QElemType;

typedef struct
{
    QElemType *base;//初始化的动态分配存储空间
    int front;//头指针
    int rear;//尾指针
}SqQueue;

Status InitQueue(SqQueue *Q)//构造一个空队列Q
{
    (*Q).base = (QElemType *)malloc(MAXQSIZE*sizeof(QElemType));
    if(!(*Q).base)
        exit(OVERFLOW);
    (*Q).front = 0;
    (*Q).rear = 0;
    return OK;
}

int QueueLength(SqQueue Q)//求队列的长度
{
    return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}

Status EnQueue(SqQueue *Q,QElemType e)
{
    if(((*Q).rear + 1)%MAXQSIZE == (*Q).front)//队列满
    {
        return ERROR;
    }
    (*Q).base[(*Q).rear] = e;
    (*Q).rear = ((*Q).rear + 1) % MAXQSIZE;
    return OK;
}

Status DeQueue(SqQueue *Q,QElemType *e)
{
    if((*Q).front == (*Q).rear)
        return ERROR;//队列空
    *e = (*Q).base[(*Q).front];//保存队头元素
    (*Q).front = ((*Q).front+1)%MAXQSIZE;
    return OK;
}

QElemType GetHead(SqQueue Q)
{
    if(Q.front == Q.rear)
        return ERROR;//队列空
    return Q.base[Q.front];//返回队头元素
}

int main()
{
	return 0;
}
