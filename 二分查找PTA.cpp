#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标1开始存储 */
Position BinarySearch( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    Position P;

    L = ReadInput();
    scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

Position BinarySearch(List L,ElementType X)
{
	Position NotFound =0;
	Position front=1;
	Position mid;
	Position last=L->Last;
	while(front<=last){
		mid=(front+last)/2;
		if(X==L->Data[mid]){
			return mid;
			break;
		}
		if(X<L->Data[mid]){
			last=mid-1;
			continue;
		}
		if(X>L->Data[mid]){
			front=mid+1;
			continue;
		}
	}
	if(front>last){
		return NotFound;
	}
}
