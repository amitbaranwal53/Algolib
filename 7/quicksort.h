int partition(int a[],int p,int r)
{
int pivot,i,j,t;
pivot=a[r];
i=p-1;
for(j=p;j<r;j++){
if(a[j]<=pivot){
i++;
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
t=a[i+1];
a[i+1]=a[r];
a[r]=t;
return (i+1);
}

void quicksort(int a[],int p,int r)
{
int q;
if(p<r){
q=partition(a,p,r);
quicksort(a,p,q-1);
quicksort(a,q+1,r);
}
}
