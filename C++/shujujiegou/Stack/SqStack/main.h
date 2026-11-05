#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100

typedef int Status;
typedef int SElemType;

typedef struct {
	SElemType* top;
	SElemType* base;
	int stacksize;
}SqStack;

Status InitStack(SqStack& S);//构造一个空栈
Status StackEmpty(SqStack& S);//判断顺序栈是否为空
int StackLength(SqStack& S);//求栈的长度
Status ClearStack(SqStack& S);//清空栈
Status DestoryStack(SqStack& S);//销毁栈
Status Push(SqStack& S, SElemType e);//入栈
Status Pop(SqStack& S, SElemType& e);//出栈
