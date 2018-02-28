# include<stdio.h>
# include<stdlib.h>

typedef struct node{
	int a;
	struct node *Next;
}LinkStack;

LinkStack *create();

void push(int b,LinkStack *s);

int pop(LinkStack *s);

int isEmpty(LinkStack *s);

int main()
{
	return 0;
}

LinkStack *create()
{
	LinkStack *s=(LinkStack*)malloc(sizeof(LinkStack));
	s->Next =NULL;
	return s;
}

int isEmpty(LinkStack *s)
{  /*判断是否为空函数,空函数返回1,否则返回0*/
	return (s->Next==NULL);
}

void push(int b,LinkStack *s)
{
	LinkStack *nextElement=(LinkStack *)malloc(sizeof(LinkStack));
	nextElement->a =b;
	nextElement->Next =s->Next ;
	s->Next =nextElement;
	return ;
}

int pop(LinkStack *s)
{
	LinkStack *b;
	int Data;
	if(isEmpty(s)){
		printf("函数为空");
		return NULL; 
	}else{
		b=s->Next ;
		s->Next =b->Next ;
		Data=b->a ; 
		free(b);
		return Data;
	}
	
}

