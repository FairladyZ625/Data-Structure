# include<stdio.h>
# include<stdlib.h>
typedef struct _node{
	int num;
	int address;
	int nextaddress;
	struct _node *next;
}link;
typedef struct _node* linklist; //创建指针结构// 
int main()
{
	//开始读入题目链表// 
	linklist head,h1,l1; 
	int firstaddress,n,k;
	scanf("%d %d %d",&firstaddress,&n,&k);
	head=(linklist)malloc(sizeof(link)); //创建头指针// 
	h1=head;  
	for(int i=0;i<n;i++){
		l1=(linklist)malloc(sizeof(link));
		scanf("%d %d %d",&l1->address,&l1->num,&l1->nextaddress);
		h1->next=l1;
		h1=l1; 
	}
	h1->next=NULL; 
	//下方测试是否成功读入链表//
	/*
	printf("原链表"); 
	head=head->next; 
	while(head){
		printf("%d",head->num);
		head=head->next;
	}
	printf("\n");
	*/
	//开始排序链表//
	/*
	linklist head2,h2,l2,h3; //创建第二个链表,直接将查找到的顺序结点插入新链表// 
	head2=(linklist)malloc(sizeof(link));//创建新链表表头// 
	head2->next=NULL;
	h3=head2;
	h2=head;
	for(int i=1;i<=n;i++){//循环查找链表进行排序// 
		while(i!=h2->num){
			h2=h2->next; 
		}
		h2=head;//让head回到初始值,可以进行下次遍历// 
		if(h2->num==i){//成功后链接链表// 
			l2=(linklist)malloc(sizeof(link));
			l2->address =h2->address;
			l2->num =h2->num;
			l2->nextaddress =h2->nextaddress; 
			h3->next=l2;
			h3=l2;
		}
	}
	h3->next=NULL;
	错误方法 不应该这么排序 
	*/  
	printf("%d",head->next->next->nextaddress);
	linklist p2,l2,q2;
	int findaddress=firstaddress;
	l2=(linklist)malloc(sizeof(link));
	l2->next=NULL;
	p2=l2;
	while(findaddress!=-1){
		q2=head->next;
		while(q2){
			if(q2->address==findaddress){
				p2->next=q2->next; 
				p2=p2->next;
				printf("%d  ",p2->num);  
				findaddress=p2->nextaddress; 
				        
			}else{
				q2=q2->next; 
			}
		}
	}
	p2->next=NULL;
	//下方测试是否成功排序//
	printf("排序");
	l2=l2->next;
	while(l2){
		printf("%d",l2->num);
		l2=l2->next;
	}
	printf("\n");
}
