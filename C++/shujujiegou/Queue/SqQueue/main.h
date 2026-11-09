#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100

typedef int Status;
typedef int QElemType;

typedef struct
{
	QElemType* base;
	int front;
	int rear;
}SqQueue;

Status InitQueue(SqQueue& Q);//初始化一个空队列
int QueueLength(SqQueue& Q);//求队列长度
Status EnQueue(SqQueue& Q, QElemType e);//进队
Status DeQueue(SqQueue& Q, QElemType& e);//退队
QElemType GetHead(SqQueue& Q);//得到头元素
