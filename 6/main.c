#include<stdio.h>
#include"heap.h"
int main()
{
int a[100],n,i;
printf("How many elements?/");
scanf("%d",&n);
printf("Enter Numbers!!!\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
heapsort(a,n);
for(i=0;i<n;i++)
printf("%d->",a[i]);
printf("\n");
return 0;
}
