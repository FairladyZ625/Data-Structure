# include<stdio.h>
# include<stdlib.h>

typedef struct _node{
	int num;
	int index;
	_node *next;
}Poly; 

Poly ReadPoly();

void attach(int n,int i,Poly *prear);

Poly Add(Poly P1,Poly P2);

int main()
{
	Poly P1,P2,PP,PS;
	
	P1=ReadPoly();
	P2=ReadPoly();
	//PP=Mult(P1,P2);
	PS=Add(P1,P2);
	//PrintPoly(PS);
	
	return 0;
 } 
 
 Poly ReadPoly()
 {
	Poly P,Rear,t;
	int c,e,N;
	scanf("%d",N);
	P=(Poly)malloc(sizeof(Poly));
	P->next =NULL;
	Rear=P;
	while(N--){
		scanf("%d %d",&c,&e);
		Attach(c,e,&rear);
	}
	t=P;
	P=P->next;
	free(t);
	return P;
 }
 
 void Attach(int n,int i,Poly *prear)
 {
	Poly P=(Poly)malloc(sizeof(Poly));
	P->num =n;
	P->index =i;
	P->next =NULL;
	(*prear)->next =P;
	*prear=P;
 }
 
 Poly Add(Poly P1,Poly P2)
 {
 	Poly t1=P1;
 	Poly t2=p2;
 	Poly P=(Poly)malloc(sizeof(Poly));
 	P->next =NULL;
 	Poly rear=P;
 	while(t1&&t2){
 		if(t1->index==t2->index ){
 			Poly a=(Poly)malloc(sizeof(Poly));
 			a->index =t1->index ;
 			a->num =(t1->num )+(t2->num);
 			rear->next =a; 
 			rear=a;
		 }else if(t1->index >t2->index ){
		 	Poly b=(Poly)malloc(sizeof(Poly));
		 	b->index =t1->index ;
		 	b->num =t1->num ;
		 	rear->next =b;
		 	rear=b;
		 }else if(t1->index<t2->index ){
		 	Poly c=(Poly)malloc(sizeof(Poly));
		 	c->index =t2->index ;
		 	c->num =t2->num ;
		 	rear->next =c;
		 	rear=c;
		 }
	 }
	 if(t1){
		Poly d=(Poly)malloc(sizeof(Poly));
		d->index =t1->index ;
		d->num =t1->num ;
		rear->next =d;
		rear=d;
	 }
	 if(t2){
	 	Poly e=(Poly)malloc(sizeof(Poly));
		e->index =t2->index ;
		e->num =t2->num ;
		rear->next =e;
		rear=e; 
	 }
	 Poly t=P;
	 P=P->next ;
	 free(t);
	 return P;
 }
 
