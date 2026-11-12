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

typedef struct Qnode{
    QElemType data;
    struct Qnode *next;
}QNode,*QueuePtr;

typedef struct
{
    QueuePtr front;
    QueuePtr rear;
}LinkQueue;

Status InitQueue(LinkQueue *Q)
{
    (*Q).front=(*Q).rear=(QueuePtr)malloc(sizeof(QNode));
    if(!(*Q).front)
        exit(OVERFLOW);
    (*Q).front->next = NULL;
    return OK;
}

Status DestroyQueue(LinkQueue *Q)
{
    while((*Q).front)
    {
        QNode* p;
        p = (*Q).front->next;
        free((*Q).front);
        (*Q).front = p;
    }
    return OK;
}

Status EnQueue(LinkQueue *Q,QElemType e)
{
    QNode *p = (QNode*)malloc(sizeof(QNode));  
    if(!p)
        exit(OVERFLOW);
    p->data = e;
    p->next = NULL;
    (*Q).rear->next = p;
    (*Q).rear = p;
    return OK;
}

Status DeQueue(LinkQueue *Q,QElemType *e)
{
    if((*Q).front == (*Q).rear)
        return ERROR;
    QNode *p = (*Q).front->next;
    *e = p->data;
    (*Q).front->next = p->next;
    if((*Q).rear == p)
        (*Q).rear = (*Q).front;
    free(p);
    return OK;
}

Status GetHead(LinkQueue Q,QElemType *e)
{
    if(Q.front == Q.rear)
        return ERROR;
    *e = Q.front->next->data;
    return OK;
}

int main()
{
    return 0;
}
