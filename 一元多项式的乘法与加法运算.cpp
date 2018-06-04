# include<stdio.h>
# include<stdlib.h>

typedef struct _node{
	int num;
	int index;
	struct _node *next;
}Poly; 

Poly* ReadPoly();

void attach(int n,int i,Poly **prear);

Poly* Add(Poly *P1,Poly *P2);

Poly* Mult(Poly* P1,Poly*P2);

void PrintPoly(Poly* P);

int main()
{
	Poly *P3,*P4,*PP,*PS;
	P3=ReadPoly();
	P4=ReadPoly();
	PP=Mult(P3,P4);
	PS=Add(P3,P4);
	PrintPoly(PP);
	PrintPoly(PS);
	return 0;
 } 
 
  void Attach(int n,int i,Poly **prear)
 {
	Poly *P;
	P=(Poly*)malloc(sizeof(Poly));
	P->num =n;
	P->index =i;
	P->next =NULL;
	(*prear)->next=P;
	(*prear)=P;
 }
 
 Poly* ReadPoly()
 {
	Poly *P,*Rear,*t;
	int c,e,N;
	scanf("%d",&N);
	P=(Poly*)malloc(sizeof(Poly));
	P->next =NULL;
	Rear=P;
	while(N--){
		scanf("%d %d",&c,&e);
		Attach(c,e,&Rear);
	}
	t=P;
	P=P->next;
	free(t);
	return P;
 }
 
 Poly* Add(Poly *P1,Poly *P2)
 {
 	Poly *t1=P1;
 	Poly *t2=P2;
 	Poly *P=(Poly*)malloc(sizeof(Poly));
 	P->next =NULL;
 	Poly *rear=P;
 	while(t1&&t2){
 		if(t1->index==t2->index ){
 			Poly *a=(Poly*)malloc(sizeof(Poly));
 			a->index =t1->index ;
 			a->num =(t1->num )+(t2->num);
 			rear->next =a; 
 			rear=a;
		 }else if(t1->index >t2->index ){
		 	Poly *b=(Poly*)malloc(sizeof(Poly));
		 	b->index =t1->index ;
		 	b->num =t1->num ;
		 	rear->next =b;
		 	rear=b;
		 }else if(t1->index<t2->index ){
		 	Poly *c=(Poly*)malloc(sizeof(Poly));
		 	c->index =t2->index ;
		 	c->num =t2->num ;
		 	rear->next =c;
		 	rear=c;
		 } 
	 }
	 if(t1){
		Poly *d=(Poly*)malloc(sizeof(Poly));
		d->index =t1->index ;
		d->num =t1->num ;
		rear->next =d;
		rear=d;
	 }
	 if(t2){
	 	Poly *e=(Poly*)malloc(sizeof(Poly));
		e->index =t2->index ;
		e->num =t2->num ;
		rear->next =e;
		rear=e; 
	 }
	 Poly *t=P;
	 P=P->next ;
	 free(t);
	 return P;
 }
 
 Poly* Mult(Poly *P1,Poly* P2)
 {
	Poly *t1,*t2,*rear,*P,*t;
	int n,i;
	if(!P1||!P2){
		return NULL;
	}
	t1=P1;t2=P2;
	P=(Poly*)malloc(sizeof(Poly));
	rear=P;
	while(t2){
		Attach((t1->num)*(t2->num),(t1->index)*(t2->index),&rear);
		t2=t2->next;
	}
	t1=t1->next;
	while(t1){
		t2=P2;
		rear=P;
		while(t2){
			n=t1->num +t2->num;
			i=t1->index+t2->index;
			while(rear->next&&rear->next->index>i){
				rear=rear->next; 
			}
			if(rear->next && rear->next->index==i){
				if(rear->next->index +i){
					rear->next->index +=i; 
				}else{
					rear->next=t;
					rear->next=t->next;
					free(t); 
				}
			}else{
				t=(Poly*)malloc(sizeof(Poly));
				t->index=i;
				t->num =n;
				t->next=rear->next;
				rear->next=t;
				rear=rear->next;   
			} 
		}
	}
	t2=P;P=P->next;free(t2);
	return P;  
 }
 
 void PrintPoly(Poly *P)
 {
 	if(!P){
 		printf("0 0\n");
 		return;
	 }
	int flag=0;
	while(P){
		if(!flag){
			flag=1;
		}else{
			printf(" ");
		}
		printf("%d %d",P->num ,P->index);
	}
	return;
 }
