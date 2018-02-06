# include<Stdio.h>

int maxsubseqsuml(int a[],int n)
{
	int thissum,maxsum=0;
	int i,j,k;
	for (i=0;i<n;i++){
		for (j=i;j<n;j++){
			thissum=0;
			for (k=i;k<=j;k++)
				thissum+=a[k];
			if (thissum>maxsum)
				maxsum=thissum;
		}
	}
	return maxsum;
}
int main()
{
	
 } 
