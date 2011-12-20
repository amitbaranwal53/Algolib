//call must be like mergesort(a,0,n-1);
//as we are passing index range in which elements are existing!!!
//cormen->1 is replaced by 0 for c/c++ style
#include<limits.h>
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
