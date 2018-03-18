# include<stdio.h>
# include<stdlib.h>

typedef struct _node{
	int num;
	int index;
	struct _node* next;
}List;

int main()
{
	List *list1=(List*)malloc(sizeof(List));
	List *list2=(List*)malloc(sizeof(List));
	int n1=0,n2=0;
	scanf("%d",&n1);
	List *p=list1;
	List *q=list2;
	for(int i=1;i<=n1;i++){
		scanf("%d",&(p->num));
		scanf("%d",&(p->index ));
		p=p->next;  
	}	
}
