# include<stdio.h>
# include<stdlib.h>
typedef struct _node{
	int num;
	int address;
	int nextaddress;
	struct _node *next;
}link;
typedef struct _node* linklist; //����ָ��ṹ// 
int main()
{
	//��ʼ������Ŀ����// 
	linklist head,h1,l1; 
	int firstaddress,n,k;
	scanf("%d %d %d",&firstaddress,&n,&k);
	head=(linklist)malloc(sizeof(link)); //����ͷָ��// 
	h1=head;  
	for(int i=0;i<n;i++){
		l1=(linklist)malloc(sizeof(link));
		scanf("%d %d %d",&l1->address,&l1->num,&l1->nextaddress);
		h1->next=l1;
		h1=l1; 
	}
	h1->next=NULL; 
	//�·������Ƿ�ɹ���������//
	/*
	printf("ԭ����"); 
	head=head->next; 
	while(head){
		printf("%d",head->num);
		head=head->next;
	}
	printf("\n");
	*/
	//��ʼ��������//
	/*
	linklist head2,h2,l2,h3; //�����ڶ�������,ֱ�ӽ����ҵ���˳�������������// 
	head2=(linklist)malloc(sizeof(link));//�����������ͷ// 
	head2->next=NULL;
	h3=head2;
	h2=head;
	for(int i=1;i<=n;i++){//ѭ�����������������// 
		while(i!=h2->num){
			h2=h2->next; 
		}
		h2=head;//��head�ص���ʼֵ,���Խ����´α���// 
		if(h2->num==i){//�ɹ�����������// 
			l2=(linklist)malloc(sizeof(link));
			l2->address =h2->address;
			l2->num =h2->num;
			l2->nextaddress =h2->nextaddress; 
			h3->next=l2;
			h3=l2;
		}
	}
	h3->next=NULL;
	���󷽷� ��Ӧ����ô���� 
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
	//�·������Ƿ�ɹ�����//
	printf("����");
	l2=l2->next;
	while(l2){
		printf("%d",l2->num);
		l2=l2->next;
	}
	printf("\n");
}
