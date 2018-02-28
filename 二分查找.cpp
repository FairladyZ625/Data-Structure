# include<stdio.h>
# include<stdlib.h>

int main()
{
	int k=45;
	int a[]={5,16,39,45,51,98,100,202,226,321,444,501};
	int length=0;
	while(a[length]){
		length++;
	}
	length=length-2;
	int right=length;
	int left=1;
	int mid=0;
	while(left<=right){
		mid=(left+right)/2;
		if(a[mid]<k){
			left=mid+1;
		}else if(a[mid]>k){
			right=mid-1;
		}else{
			printf("找到了第%d个",mid);
			break;
		}
	}
	if(left>right){
		printf("没找到");
	}
	return 0;
}
