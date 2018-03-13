# include<stdio.h>
# include<stdlib.h>

typedef struct node{
	int num;
	node *Next;
}List;

int length(List *ptrl);

List *FindSerNum(List *list,int k);

List *FindNum(List *list,int k);

List *insert(List *list,int i,int Num);

List *Delete(List *list,int i);

int main()
{
	List *Myser;
	Myser->Next =insert(Myser,1,3);
	List *s=Myser->Next;
	printf("%d",s->num );
	return 0;
}

int length(List *ptrl)
{
	int i=0;
	while(ptrl){
		ptrl=ptrl->Next;
		i++; 
	}
	return i;
}

List *FindSerNum(List *list,int k)
{
	int i=1;
	while(list&&i<k){
		list=list->Next;
		i++;
	}
	if(i=k){
		return list;
	}else{
		return NULL;
	}	
}

List *FindNum(List *list, int k)
{
	while(list&&list->num !=k){
		list=list->Next ;
	}
	if(list->num ==k){
		return list;
	}else{
		return NULL;
	}
}

List *insert(List*list,int i,int Num)
{
	if (i==1){
		List *s=(List*)malloc(sizeof(List));
		s->num =Num; 
		s->Next=list;
		return s; 
	}
	List *p;
	p=FindSerNum(list,i-1);
	if(p=NULL){
		printf("参数错");
		return NULL; 
	}else{
		List *c=(List*)malloc(sizeof(List));
		c->num =Num;
		c->Next =p->Next ;
		p->Next =c;
		return list;
	}
}

List *Delete(List *list,int i)
{
	if(i==1){
		List *s=list;
		if(list!=NULL){
			list=list->Next;
		}else{
			return NULL;
		}
		free(s);
		return list;
	}
	List *p=FindSerNum(list,i-1);
	if(p==NULL){
		printf("%d结点不存在",i-1);
		return NULL;
	}else if(p->Next ==NULL){
		printf("%d结点不存在",i);
		return NULL;
	}else{
		List *c=(List*)malloc(sizeof(List));
		c=p->Next;
		p->Next =c->Next;
		free(c);
		return list;  
	}
 } 
