# include<stdio.h>

int main()
{
	int begin=0,maxsum=0,thissum=0,last=0,n=0,first=0;
	scanf("%d",&n);
	int seq[n];
	scanf("%d",&seq[0]);
	maxsum=seq[0];
	thissum=seq[0];
	for(int i=1;i<n;i++){
		scanf("%d",&seq[i]);
		if(thissum>=0){
			thissum+=seq[i];
		}else{
			thissum=seq[i];
			begin=i;
		}
		if(thissum>maxsum){
			maxsum=thissum;
			first=begin;
			last=i;
		}
	}
	if(maxsum<0){
		first=0;
		last=n-1;
		maxsum=0;
	}
	printf("%d %d %d",maxsum,seq[first],seq[last]);
	return 0;
}
