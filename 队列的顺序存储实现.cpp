# include<stdio.h>
# include<stdlib.h>

#define MaxSize 100

typedef struct{
	int Data[MaxSize];
	int rear;
	int front;
}Queue;

Queue CreateQueue(int Max);

int isFull(Queue *Q,int Max);

void AddQ(Queue *Q,int item);

int isEmpty(Queue Q);

int DeleteQ(Queue *Q);

int main()
{
	return 0;
}

Queue CreateQueue()
{
	Queue list;
	list.front=-1;
	list.rear=0;
	return list;   
}

int isFull(Queue *Q,int Max)
{
	if(Q->rear ==(Max-1)){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(Queue *Q)
{
	if(Q->front ==Q->rear  ){
		return 1;
	}else{
		return 0;
	}	
}

void AddQ(Queue *Q,int item)
{
	if(isFull(Q,MaxSize)){
		printf("队列满");
		return;
	}else{
		Q->Data[++(Q->rear)]=item;  
	}
}
int DeleteQ(Queue *Q)
{
	int retData;
	if(isEmpty(Q)){
		printf("队列空");
		return NULL;
	}else{
		retData=Q->Data[++(Q->front)];
		return retData; 
	}
}
