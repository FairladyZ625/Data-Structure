# include<stdio.h>

int max(int a,int b,int c)//求三个数的最大值 
{
	if (a>b){
		if(a>c){
			return a;
		}else{
			return c;
		}
	}else if(b>c){
		return b;
	}else{
		return c;
	}
 } 
 
  int maxsum(int list[],int left,int right)//递归的主体函数 
 {
 	int MaxLeftNumber,MaxRightNumber;
 	int MaxBoardLeftSum,MaxBoardRightSum;
 	int BoardLeftSum,BoardRightSum;
 	int center,i;
 	if (left==right){
 		if(list[left]>0){
 			return list[left];
		}else{
			return 0;
		}
	}
	center=(left+right)/2;
	MaxLeftNumber=maxsum(list,left,center);
	MaxRightNumber=maxsum(list,center+1,right);
	MaxBoardLeftSum=0;
	MaxBoardRightSum=0;
	BoardLeftSum=0;
	BoardRightSum=0;
	for(i=center;i>=left;i--){
		BoardLeftSum+=list[i];
		if (BoardLeftSum>MaxBoardLeftSum){
			MaxBoardLeftSum=BoardLeftSum;
		}
	}
	for (i=center+1;i<=right;i++){
		BoardRightSum+=list[i];
		if (BoardRightSum>MaxBoardRightSum){
			MaxBoardRightSum=BoardRightSum;
		}
	}
	
	return max(MaxLeftNumber,MaxRightNumber,MaxBoardRightSum+MaxBoardLeftSum);
	  
 }

 int main()
 {
 	int a[]={4,-3,5,-2,-1,2,6,-2};
 	int n=8;
 	int consequence=0;
 	consequence=maxsum(a,0,n-1);
 	printf("%d",consequence);
 	return 0;
 }
 

