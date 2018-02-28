# include<stdio.h>
# include<stdlib.h>

#define MaxSize<1000>

typedef struct{
	ElementType Data[MaxSize];
	int top;
}Stack;

struct DStack{
	ElementType Data[MaxSize];
	int Top1;
	int Top2;
}S;

void Push(Stack *PtrS,ElementType item)
{
	if (PtrS->top ==MaxSize-1){
		printf("堆栈满");
		return ;
	} else{
		PtrS->Data[++(PtrS->top)]=item;
		return; 
	}
}

ElementType Pop(Stack *PtrS)
{
	if (PtrS->top ==-1){
		printf("堆栈空");
		return ERROR; /*ERROR是ElementType的特殊值,标志错误*/
	}else{
		return (PtrS->Data[(PtrS->top)--]);
	}
}

void PushD (struct DStack *PtrS,ElementType item,int Tag)
{ /*Tag作为区分两个堆栈的标志,取值为1和2*/
	if (PtrS->Top2 -PtrS->Top1 ==1){ /*堆栈满*/
	printf("堆栈满");
	return ;
	}
	if (Tag==1){ /*第一个堆栈操作*/ 
		PtrS->Data [++(PtrS->Top1 )]=item;
	}else{ /*第二个堆栈操作 注意第二个堆栈Top是从后往前--*/
		PtrS->Data [--(PtrS->Top2 )]=item;
	}
}

ElementType PopD(struct DStack *PtrS,int Tag)
{ /*Tag作为区分两个堆栈的标志,取值为1和2*/
	if (Tag==1){ /*对第一个堆栈操作*/
		if (PtrS->Top1 ==-1){ /*一堆栈空*/
			printf("堆栈1空"); 
			return NULL; 
		}else{
			return PtrS->Data [(PtrS->Top1 )--];
		}else{
			if (PtrS->Top2 ==MaxSize){ /*堆栈2空*/
				printf("堆栈2空");
				return NULL;
			}else{
				return PtrS->Data [(PtrS->Top2 )++];
			}
		}	
	}	
}
int main()
{
	S.Top1 =-1;
	S.Top2 =MaxSize;
}
