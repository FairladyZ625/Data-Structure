# include<stdio.h>
# include<stdlib.h>

typedef struct Node{
	ElementType Data;
	struct Node *Next;
}LinkStack;

LinkStack *CreateStack();

int IsEmpty(LinkStack *S);

void Push(ElementType item,LinkStack *S);

ElementType Pop(LinkStacck *S);

int main()
{
	LinkStack *Top;
 }
 
LinkStack *CreateStack()
{ /*构建一个堆栈的头结点,返回指针*/
	LinkStack *S=(LinkStack*)malloc(sizeof(struct Node));
	S->Next =NULL;
	return S;
 } 
 
int IsEmpty(LinkStack *S)
{ /*判断堆栈s是否为空,若为空函数返回整数1,否则返回0*/
	return (S->Next ==NULL);
}

void Push(ElementType item,LinkStack *S)
{ /*将元素item压入s*/
	struct Node *TmpCell;
	TmpCell =malloc(sizeof(struct Node));
	TmpCell->Data =item;
	TmpCell->Next =S->Next ;
	S->Next =TmpCell;
}

ElementType Pop(LinkStack *S)
{ /*删除并返回堆栈s的栈顶元素*/
	struct Node *FirstCell;
	ElementType TopElem;
	if (IsEmpty(S)){
		printf("堆栈空");
		return NULL;
	} else{
		FirstCell=S->Next ;
		S->Next =FirstCell->Next;
		TopElem=FirstCell->Data ;
		free(FirstCell);
		return TopElem;
	}
}
