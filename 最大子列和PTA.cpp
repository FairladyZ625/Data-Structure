# include<stdio.h>
# include<stdlib.h>

int maxsuseqsum(int a[],int k);

int main()
{
	int num;
	int k;
	int judge =0;
	scanf("%d",&k);
	int list[k];
	for(int i=0;i<k;i++){
		scanf("%d",&list[i]);
	}
	for (int j=0;j<k;j++){
		if(list[j]>0){
			judge=1;
		}
	}
	int answer=maxsuseqsum(list,k);
	if(!judge){
		printf("%d",0);
	}else{
		printf("%d",answer);
	}
	return 0;
}

int maxsuseqsum(int a[],int k)
{
	int thissum,maxsum;
	int i;
	thissum=maxsum=0;
	for(i=0;i<k;i++){
		thissum+=a[i];
		if(thissum>maxsum){
			maxsum=thissum;
		}else if(thissum<0){
			thissum=0;
		}
	}
	return maxsum;
}
