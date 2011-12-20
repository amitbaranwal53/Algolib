//Input An array of numbers (a[]) and number of elments (n) i.e. *sort(a,n)
//except in merge sort---
//call must be like mergesort(a,0,n-1);
//as we are passing index range in which elements are existing!!!

//Output Sorted array using *sort

//cormen's 1 is replaced by 0 for c/c++ style in arrays!!!

#include<limits.h>

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


void merge(int a[],int p,int q,int r)
{
int L[100],R[100],n1,n2,i,j,k;
n1=q-p+1;
n2=r-q;
for(i=0;i<n1;i++)
L[i]=a[p+i];
for(j=0;j<n2;j++)
R[j]=a[q+j+1];
L[n1]=INT_MAX;
R[n2]=INT_MAX;
i=j=0;
for(k=p;k<=r;k++)
{
if(L[i]<=R[j]){
a[k]=L[i++];
}
else{
a[k]=R[j++];
}
}
}

void mergesort(int a[],int p,int r)
{
int q;
if(p<r)
{
q=(p+r)/2;
mergesort(a,p,q);
mergesort(a,q+1,r);
merge(a,p,q,r);
}
}


void merge_rev(int a[],int p,int q,int r)
{
int L[100],R[100],n1,n2,i,j,k;
n1=q-p+1;
n2=r-q;
for(i=0;i<n1;i++)
L[i]=a[p+i];
for(j=0;j<n2;j++)
R[j]=a[q+j+1];
L[n1]=INT_MIN;
R[n2]=INT_MIN;
i=j=0;
for(k=p;k<=r;k++)
{
if(L[i]>=R[j]){
a[k]=L[i++];
}
else{
a[k]=R[j++];
}
}
}

void mergesort_rev(int a[],int p,int r)
{
int q;
if(p<r)
{
q=(p+r)/2;
mergesort_rev(a,p,q);
mergesort_rev(a,q+1,r);
merge_rev(a,p,q,r);
}
}


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
