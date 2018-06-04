# include<stdio.h>

typedef struct HeapStruct *MaxHeap;
struct HeapStruct{
	ElementType *Elements; /*�����Ԫ�ص�����*/ 
	int size;  /*�ѵĵ�ǰԪ�ظ���*/ 
	int Capacity;	/*�ѵ��������*/
};
 
MaxHeap Create(int MaxSize)
{	/*��������Ϊmaxsize�Ŀյ�����*/
	MaxHeap H=malloc(sizeof(struct HeapStruct));
	H->Elements =malloc((MaxSize+1)*sizeof(ElementType));
	H->size =0;
	H->Capacity=MaxSize;
	H->Elements[0]=MaxData;
		/*�����ڱ�Ϊ���ڶ������п���Ԫ�ص�ֵ,�����Ժ��ܸ������*/ 
	return H;
}

void Insert(MaxHeap H,ElementType item)
{	/*��Ԫ��item��������H,����H->Element[0]�Ѿ���Ϊ�ڱ����*/
	int i;
	if(IsFull(H)){
		printf("��������");
		return;
	}
	i=++H->size;
	for(;H->Elements[i/2]<item;i/=2)
	{
		H->Elements[i]=H->Elements [i/2]; 
	}
	H->Elements[i]=item; 
 } 
 
 ElementType DeleteMax(MaxHeap H)
 {	/*������H��ȡ����ֵΪ����Ԫ��,��ɾ��һ���ڵ�*/
 	int Parent,Child;
 	ElementType MaxItem,temp;
 	if(IsEmpty(H)){
 		printf("������Ϊ��");
		return; 
	}
	MaxItem = H->Elements[1]; /*ȡ����������ֵ*/ 
	/*�����������һ��Ԫ�ظ���㿪ʼ���Ϲ����²�ڵ�*/
	temp=H->Elements[H->size--];
	for(Parent=1;Parent*2<=H->size;Parent=Child){
		Child=Parent *2;
	 	if((Child!=H->size) &&(H->Elements[Child]<H->Elements[Child+1]))
	 		Child++;
	 	if(temp>=H->Elements[Child])	break;
	 	else
	 		H->Elements[Parent]=H->Elements[Child];  
	} 
	H->Elements[Parent]=temp;
	return MaxItem; 
 }
 
