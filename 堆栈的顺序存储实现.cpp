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
		printf("��ջ��");
		return ;
	} else{
		PtrS->Data[++(PtrS->top)]=item;
		return; 
	}
}

ElementType Pop(Stack *PtrS)
{
	if (PtrS->top ==-1){
		printf("��ջ��");
		return ERROR; /*ERROR��ElementType������ֵ,��־����*/
	}else{
		return (PtrS->Data[(PtrS->top)--]);
	}
}

void PushD (struct DStack *PtrS,ElementType item,int Tag)
{ /*Tag��Ϊ����������ջ�ı�־,ȡֵΪ1��2*/
	if (PtrS->Top2 -PtrS->Top1 ==1){ /*��ջ��*/
	printf("��ջ��");
	return ;
	}
	if (Tag==1){ /*��һ����ջ����*/ 
		PtrS->Data [++(PtrS->Top1 )]=item;
	}else{ /*�ڶ�����ջ���� ע��ڶ�����ջTop�ǴӺ���ǰ--*/
		PtrS->Data [--(PtrS->Top2 )]=item;
	}
}

ElementType PopD(struct DStack *PtrS,int Tag)
{ /*Tag��Ϊ����������ջ�ı�־,ȡֵΪ1��2*/
	if (Tag==1){ /*�Ե�һ����ջ����*/
		if (PtrS->Top1 ==-1){ /*һ��ջ��*/
			printf("��ջ1��"); 
			return NULL; 
		}else{
			return PtrS->Data [(PtrS->Top1 )--];
		}else{
			if (PtrS->Top2 ==MaxSize){ /*��ջ2��*/
				printf("��ջ2��");
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
