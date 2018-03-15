#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* ϸ���ڴ˲��� */
void Print( List L ); /* ϸ���ڴ˲������������NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

List Merge( List L1,List L2)
{
	List r;
	List L=(List)malloc(sizeof(List));
	r=L;
	List p=L1->Next;
	List q=L2->Next; 
	while(p&&q){
		if(p->Data <q->Data ){
			r->Next =p;
			p=p->Next; 
			r=r->Next;    
		}else{
			r->Next=q; 
			q=q->Next;
			r=r->Next;  
		}
	}
	if(p != NULL){
		r->Next =p;
	}else if(q!=NULL){
		r->Next =q;
	}
	L1->Next =NULL;
	L2->Next =NULL;
	return L;
}
