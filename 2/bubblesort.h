//Input An array of numbers (a[]) and number of elments (n)
//Output Sorted array using Insertion Sort
//cormen->1 is replaced by 0 for c/c++ style

void bubblesort(int a[],int n)
{
int i,j,t;
for(i=0;i<n-1;i++)
{
for(j=1;j<n-i;j++)
{
if(a[j-1]>a[j])
{
t=a[j];
a[j]=a[j-1];
a[j-1]=t;
}
}
}
}

void bubblesort_rev(int a[],int n)
{
int i,j,t;
for(i=0;i<n-1;i++)
{
for(j=1;j<n-i;j++)
{
if(a[j-1]<a[j])
{
t=a[j];
a[j]=a[j-1];
a[j-1]=t;
}
}
}
}
