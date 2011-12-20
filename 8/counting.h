int MAX(int a[], int n)
{
	int i,max=a[1];
	for(i=2;i<=n;i++)
		if(a[i]>max)
			max=a[i];
	return max;
}
void counting_sort(int a[],int b[],int n)
{
	int c[500],k,i,j;
//initially we find k i.e. max element
	k=MAX(a,n);
	for(i=0;i<k;i++)
		c[i]=0;
	for(j=1;j<=n;j++)
		c[a[j]]++;
	for(i=1;i<=k;i++)
		c[i]+=c[i-1];
	for(j=n;j>=1;j--)
	{
		b[c[a[j]]]=a[j];
		c[a[j]]--;
	}
}