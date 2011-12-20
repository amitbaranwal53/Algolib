//Input An array of numbers (a[]) and number of elments (n)
//Output Sorted array using Insertion Sort
//cormen->1 is replaced by 0 for c/c++ style

void selsort(int a[], int n)
{
int i,j,t,small;
for(i=0;i<n-1;i++)
{
small=a[i];
t=i;
for(j=i+1;j<n;j++)
{
if(a[j]<small)
{
small=a[j];
t=j;
}
}
a[t]=a[i];
a[i]=small;
}
}

void selsort_rev(int a[], int n)
{
int i,j,t,small;
for(i=0;i<n-1;i++)
{
small=a[i];
t=i;
for(j=i+1;j<n;j++)
{
if(a[j]>small)
{
small=a[j];
t=j;
}
}
a[t]=a[i];
a[i]=small;
}
}
