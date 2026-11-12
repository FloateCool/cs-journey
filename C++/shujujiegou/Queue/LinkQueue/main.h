#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define I_OVERFLOW -2
#define MAXSIZE 100

typedef int Status;
typedef int QElemType;

typedef struct Qnode
{
	QElemType data;
	struct Qnode* next;
}QNode,*QueuePtr;

typedef struct
{
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;

Status InitQueue(LinkQueue& Q);//初始化一个空链队
Status DestroyQueue(LinkQueue& Q);//销毁链队
Status EnQueue(LinkQueue& Q, QElemType e);//链队添加一个新元素
Status DeQueue(LinkQueue& Q, QElemType& e);//元素退队
Status GetHead(LinkQueue Q, QElemType& e);//得到头元素
