//Input An array of numbers (a[]) and number of elments (n)
//Output Sorted array using Insertion Sort
//cormen->1 is replaced by 0 for c/c++ style

void inssort(int a[],int n)
{
int i,j,key;
for(i=1;i<n;i++)
{
key=a[i];
j=i-1;
while(j>-1 && a[j]>key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
}

void inssort_rev(int a[],int n)
{
int i,j,key;
for(i=1;i<n;i++)
{
key=a[i];
j=i-1;
while(j>-1 && a[j]<key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
}
