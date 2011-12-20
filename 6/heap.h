#include<limits.h>
//order-1
int parent(int i)
{
return((i-1)/2);
}
int left(int i)
{
return(2*i+1);
}
int right(int i)
{
return(2*i+2);
}

//order-lg n
void max_heapify(int a[],int size,int i)
{
int l,r,largest,t;
l=left(i);
r=right(i);
//largest=a[l]>a[r]?(a[l]>a[i]?a[l]:a[i]):(a[r]>a[i]?a[r]:a[i]);
if(l<size &&  a[l]>a[i])
largest=l;
else largest=i;
if(r<size && a[r]>a[largest])
largest=r;
if(largest!=i)
{
t=a[largest];
a[largest]=a[i];
a[i]=t;
max_heapify(a,size,largest);
}
}

//order-n
void build_max_heap(int a[],int size)
{
int i;
for(i=size/2;i>=0;i--)
max_heapify(a,size,i);
}

//order-nlg n
void heapsort(int a[],int n)
{
int size,t,i;
size=n;
build_max_heap(a,n);
for(i=n-1;i>0;i--)
{
t=a[0];
a[0]=a[i];
a[i]=t;
size--;
max_heapify(a,size,0);
}
}




//---------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------//


//priority queue--all but heap_maximum is done in lg n time in heap implementation!!!

int heap_maximum(int a[])
{
return a[0];
}

int heap_extract_max(int a[],int size)
{
int max;
if(size<1)
{
printf("Heap Overflow!!!\n"); return -1;
}
max=a[0];
size--;
max_heapify(a,size,0);
return max;
}

void heap_increase_key(int a[],int i,int key)
{
int t;
if(key<a[i]) { printf("Invalid key!!!\n"); return;}
a[i]=key;
while(i>0 && a[parent(i)]<a[i])
{
t=a[parent(i)];
a[parent(i)]=a[i];
a[i]=t;
i=parent(i);
}
}

void max_heap_insert(int a[],int key,int size)
{
size++;
a[size-1]=INT_MIN;
heap_increase_key(a,size-1,key);
}
