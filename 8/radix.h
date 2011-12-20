//a is replaced by al(a,div)
//counting_sort is modified for particular digit
int val(int a,int div)
{
	if(a/div) return((a/div)%10);
	else return 0;
}
int MAX(int a[], int n,int div)
{
	int i,max=val(a[1],div);
	for(i=2;i<=n;i++)
		if(val(a[i],div)>max)
			max=val(a[i],div);
	return max;
}
void counting_sort(int a[],int b[],int n,int div)
{
	int c[500],k,i,j;
//initially we find k i.e. max element
	k=MAX(a,n,div);
	for(i=0;i<=k;i++)
		c[i]=0;
	for(j=1;j<=n;j++)
		c[val(a[j],div)]++;
	for(i=1;i<=k;i++)
	c[i]+=c[i-1];
	for(j=n;j>=1;j--)
	{
		b[c[val(a[j],div)]]=a[j];
		c[val(a[j],div)]--;
	}
	for(i=1;i<=n;i++) a[i]=b[i];
}

void radix_sort(int a[],int n)
{
int i=10,d=1,max=a[1],j,b[100];
for(j=1;j<=n;j++){if(max<a[j]) max=a[j];}
while(max%i!=max){i*=10;d++;}
j=1;
for(i=1;i<=d;i++)
{
	counting_sort(a,b,n,j);
	j*=10;
}
}