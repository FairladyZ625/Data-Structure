# include<stdio.h>

typedef struct{
	ElementType Date{MAXSIZE};
	int last;
}List;

List *MakeEmpty()
{
	List *Ptrl;
	Ptrl=(List*)malloc(sizeof(List));
	Ptrl->last =-1;
	return Ptrl;
}
int Find(ElementType X, List *Ptrl)
{
	int i=0;
	while (i<=Ptrl->last && Ptrl->Data[i]!=X){
		i++;
	}
	if (i>Ptrl->last ) return -1;
	else return i;
	
}
int main()
{
	List L,*Ptrl; 
	return 0;
 } 
