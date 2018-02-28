# include<stdio.h>
# include<stdlib.h>

int maxsize=100;

typedef struct list {
	int a[100];  /*����һ������*/
	int last;        /*�����б�ĳ���*/
}List;

List* MakeEmpty();

int Find(List *Findlist,int i);

void InsertNum(List *Insertlist,int i,int num);

void Delete(List *Dellist,int i);

int main()
{
	List* A=MakeEmpty();
	return 0; 
}

List* MakeEmpty()
{
	List *NewList;
	NewList=(List*)malloc(sizeof(List));
	NewList->last =-1;
	return NewList;
}

void InsertNum(List *Insertlist,int i,int num)
{
	int last=Insertlist->last ;
	if(last=maxsize-1){
		printf("�б�����");
		return; 
	}
	if (i<1||i>last+2){
		printf("���뷶Χ���Ϸ�");
		return ;
	}
	for(int j=last+1;j>=i-1;j--){
		Insertlist->a[j+1]=Insertlist->a[j];  
	}
	Insertlist->a[i]=num;
	Insertlist->last ++;
	return; 
}

void Delete(List *Dellist,int i)
{
	if(i<1||i>Dellist->last+2){
		printf("ɾ����λ�ò��Ϸ�");
		return ;
	}
	for(int j=i;j<=Dellist->last;j++ ){
		Dellist->a[j-1]=Dellist->a[j];
		return; 
	}
}

int Find(List *Findlist,int i)
{
	int j=0;
	while(j<=Findlist->last &&Findlist->a [j]!= i ){
		j++;
	}
	if(j>Findlist->last ){
		printf("û�ҵ�");
		return -1; 
	}else{
		return j;
	}
}
