# include<stdio.h>
# include<stdlib.h>

typedef struct PolyNode{
	int coef; /*ϵ��*/
	int expon; /*ָ��*/
	struct PolyNode *link;
}Polynomial;

void Attach(int coef,int expon,Polynomial *PtrRear)
{	/*�����ڱ���������Ҫ�ı䵱ǰ������ʽβ��ָ���ֵ,*/
	/*���Ժ������ݽ������ǽ��ָ��ĵ�ַ,*PtrRearָ��β��*/
	Polynomial P;
	P=(Polynomial)malloc(sizeof(PolyNode));
	P->coef =coef;
	P->expon =expon;
	PtrRear->link =P;
	PtrRear=P;
}

Polynomial PolyAdd(Polynomial P1,Polynomial P2)
{
	Polynomial front,rear,temp;
	int sum;
	rear=(Polynomial)malloc(sizeof(PolyNode));
	front=rear;
	while(P1&P2)
		switch(Compare(P1->expon,P2->expon )){
			case 1:
				Attach(P1->coef,P1->expon,&rear);
				P1=P1->link;
				break; 
			case -1:
				Attach(P2->coef,P2->expon,&rear);
				P2=P2->link;
				break; 
			case 0:
				sum=P1->coef+P2->coef;
				if (sum)Attach(sum,P1->expon ,&rear);
				P1=P1->link ;
				P2=P2->link ;
				break; 
		} 
	for(;P1;P1=P1->link )Attach(P1->coef ,P1->expon ,&rear);
	for(;P2;P2=P2->link )Attach(P2->coef ,P2->expon ,&rear);
	rear->link =NULL;
	temo=front;
	front=front->link;
	free(temp);
	return front;
}
