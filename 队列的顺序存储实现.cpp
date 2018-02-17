# include<stdio.h>
# include<stdlib.h>

# define MaxSize </*存储数据元素的最大个数*/>

typedef struct{
	ElementType Data[Maxsize];
	int rear;
	int front;
}Queue;

void AddQ(Queue *PtrQ,ElementType item);

ElementType DeleteQ(Queue *PtrQ);

int main()
{
	return 0;
}

void AddQ(Queue *PtrQ,ElementType item)
{
	if ((PtrQ->rear +1)%MaxSize ==PtrQ->front ){
		printf("队列满");
		return;
	}else{
	PtrQ->rear = (PtrQ->rear +1) % Maxsize;
	PtrQ->Data [PtrQ->rear]=item;
	}
}

ElementType DeleteQ(Queue *PtrQ)
{
	if (PtrQ->front ==PtrQ->rear ){
		printf("队列空");
		return ERROR;
	}else {
		PtrQ->front = (PtrQ->front +1) %Maxsize;
		return PtrQ->Data [PtrQ->front ]
	}
}
