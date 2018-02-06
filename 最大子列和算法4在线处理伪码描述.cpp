int maxsuseqsum4(int a[],int n)
{
	int thissum,maxsum;
	int i;
	thissum=maxsum=0;
	for (i=0;i<n;i++){
		thissum+=a[i];
		if (thissum>maxsum)
			maxsum=thissum;
		else if(thissum<0)
			thissum=0;
	}
	return maxsum;
 } 
