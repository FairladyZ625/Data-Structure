#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表；空链表将输出NULL */

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
	List L=(List)malloc(sizeof(List));
	List p=L;
	while(L1&&L2){
		if(L1->Data <L2->Data ){
			p->Next =L1;
			L1=L1->Next; 
			p=p->Next;    
		}else{
			p->Next=L2; 
			L2=L2->Next;
			p=p->Next;  
		}
	}
	if(L1 != NULL){
		p->Next =L1;
	}else if(L2!=NULL){
		p->Next =L2;
	}
	p->Next =NULL;
	return L;
}
