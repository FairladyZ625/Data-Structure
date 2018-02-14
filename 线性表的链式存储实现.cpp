# include<stdio.h>
# include<stdlib.h>

typedef struct _list{
	ElementType Data;
	struct _list *Next;
}List;

int Length(List *Ptrl);

List *FindKth(int K,List *PtrL);

List *Find(ElementTypeX,List *PtrL);

List *Insert(ElementType X,int i,List *PtrL);

List *Delete(int i,List *PtrL);

int main()
{
	List L,*Ptrl;
 }
 
int Length(List *Ptrl)
{
	List *p=Ptrl;
	int j=0;
	while (p){
		p=p->Next;
		j++;   
	}
	return j;
  }  
  
List *FindKth(int K,List *PtrL)
{
	List *p=PtrL;
	int i=1;
	while(p!=NULL && i<K){
		p=p->next;
		i++;
	}
	if (i==k) return p;
	else return NULL;
}

List *Find(ElementType X,List *PtrL)
{
	List *p=PtrL;
	while (p!= NULL&&p->Data !=x){
		p=p->Next; 
	}
	return p;
}

List *Insert(ElementType X,int i,List *PtrL)
{
	List *p,*s;
	if (i==1){
		s=(List*)malloc(sizeof(List));
		s->Data =X;
		s->Next =PtrL;
		return s; 
	}
	p=FindKth(i-1,PtrL);
	if (p==NULL){
		printf("参数i错误");
		return NULL;
	}else{
		s=(List*)malloc(sizeof(List));
		s->Data =X;
		s->Next =p->Next ;
		p->Next =s;
		return PtrL;
	}
 }
 
 List *Delete(int i,List *PtrL)
 {
 	List *p,*s;
 	if (i==1){
 		s=PtrL;
 		if (PtrL!= NULL) PtrL=PtrL->Next ;
 		else return NULL;
 		free(s);
 		return PtrL;
	 }
	 p=FindKth(i-1,PtrL);
	 if (p==NULL){
	 	printf("第%d个结点不存在",i-1); return NULL;
	 }else if(p->Next =NULL){
	 	printf("第%d个结点不存在",i); return NULL;
	 }else{
	 	s=p->Next ;
	 	p->Next =s->Next ;
	 	free(s);
	 	return PtrL;
	 }
 }
