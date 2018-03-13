# include<stdio.h>
# include<stdlib.h>

typedef struct Node{
	ElementType Data;
	struct Node *next;
}QNode;

typedef struct{
	QNode *rear;
	QNode *front;
}LinkQueue;

ELementType DeleteQ(LinkQueue *PtrQ);

void InsertQ(LinkQueue *PtrQ,ElementType X);
 
int main() 
{
	LinkeQueue *PtrQ;
	return 0;
	
}

ElementType DeleteQ(LinkQueue *PtrQ)
{
	QNode *FrontCell;
	ElementType FrontElem;
	if (PtrQ->front =NULL){
		printf("╤сап©у");
		return ERROR;
	}
	FrontCell =PtrQ->front ;
	if (PtrQ->front =PtrQ->rear ){
		PtrQ->front =PtrQ->rear =NULL;
	}else{
		PtrQ->front =PtrQ->front->next ;
	}
	FrontElem=PtrQ->front->Data ;
	free(Frontcell);
	return FrontElem;
	
}

void InsertQ(LinkQueue *PtrQ,ElementType X)
{
	if(PtrQ->front =NULL){
		QNode *Add=(QNode*)malloc(sizeof(QNode));
		Add->Data =X;
		PtrQ->front=Add;
		PtrQ->rear=Add;
		return;
	}else{
		QNode *Add=(QNode*)malloc(sizeof(QNode));
		Add->Data =X;
		PtrQ->rear =Add;
		return;
	}	
}
