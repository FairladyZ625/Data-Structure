# include<stdio.h>

typedef struct HeapStruct *MaxHeap;
struct HeapStruct{
	ElementType *Elements; /*储存堆元素的数组*/ 
	int size;  /*堆的当前元素个数*/ 
	int Capacity;	/*堆的最大容量*/
};
 
MaxHeap Create(int MaxSize)
{	/*创建容量为maxsize的空的最大堆*/
	MaxHeap H=malloc(sizeof(struct HeapStruct));
	H->Elements =malloc((MaxSize+1)*sizeof(ElementType));
	H->size =0;
	H->Capacity=MaxSize;
	H->Elements[0]=MaxData;
		/*定义哨兵为大于堆中所有可能元素的值,便于以后能更快操作*/ 
	return H;
}

void Insert(MaxHeap H,ElementType item)
{	/*将元素item插入最大堆H,其中H->Element[0]已经设为哨兵结点*/
	int i;
	if(IsFull(H)){
		printf("最大堆已满");
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
 {	/*从最大堆H中取出键值为最大的元素,并删除一个节点*/
 	int Parent,Child;
 	ElementType MaxItem,temp;
 	if(IsEmpty(H)){
 		printf("最大堆以为空");
		return; 
	}
	MaxItem = H->Elements[1]; /*取出根结点最大值*/ 
	/*用最大堆中最后一个元素根结点开始向上过滤下层节点*/
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
 
