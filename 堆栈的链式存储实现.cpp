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
{ /*����һ����ջ��ͷ���,����ָ��*/
	LinkStack *S=(LinkStack*)malloc(sizeof(struct Node));
	S->Next =NULL;
	return S;
 } 
 
int IsEmpty(LinkStack *S)
{ /*�ж϶�ջs�Ƿ�Ϊ��,��Ϊ�պ�����������1,���򷵻�0*/
	return (S->Next ==NULL);
}

void Push(ElementType item,LinkStack *S)
{ /*��Ԫ��itemѹ��s*/
	struct Node *TmpCell;
	TmpCell =malloc(sizeof(struct Node));
	TmpCell->Data =item;
	TmpCell->Next =S->Next ;
	S->Next =TmpCell;
}

ElementType Pop(LinkStack *S)
{ /*ɾ�������ض�ջs��ջ��Ԫ��*/
	struct Node *FirstCell;
	ElementType TopElem;
	if (IsEmpty(S)){
		printf("��ջ��");
		return NULL;
	} else{
		FirstCell=S->Next ;
		S->Next =FirstCell->Next;
		TopElem=FirstCell->Data ;
		free(FirstCell);
		return TopElem;
	}
}
