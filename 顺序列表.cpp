# include<Stdio.h>

typedef struct{
	ElementType Data[MAXSIZE];
	int Last;
}List;

List *MakeEmpty()
{
	List *Ptrl;
	Ptrl=(List*)malloc(sizeof(List));
	Ptrl->last=-1;
	return Ptrl;
 } 
 
 int Find(ElementType X,List*PtrL)
 {
 	int i=0;
 	while(i<=PtrL->last &&PtrL->Data[i]!= X){
 		i++;
	 }
	 if (i>PtrL->Last) return -1;
	 else return i;
 }
 
 void Insert(ElementType X,int i,List *PtrL)
 {
 	int j;
 	if (PtrL->Last ==MAXSIZE-1){
 		printf("表满");
 		return ;
	 }
	 if (i<1||PtrL->Last+2){
	 	printf("位置不合法");
	 	return ;
	 }
	 for (j=PtrL->Last ;j>=i-1;j--)
	 	PtrL->Data[j+1]=PtrL->Data[j];
	PtrL->Data[i-1]=X;
	PtrL->Last ++;
	return ;
 }
 
 void Delete(int i,List *PtrL)
 {
 	int j;
 	if (i<1||i>PtrL->Last +1){
 		printf("不存在第%d个元素",i);
 		return ;
	 }
	 for (j=i;j<=PtrL->Last ;j++)
	 	PtrL->Data[j-1]=PtrL->Data[j];
	PtrL->Last --;
	return ;
 }
