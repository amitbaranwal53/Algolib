#include<stdio.h>
#include "quicksort.h"
int main()
{
int a[100],n,i;
printf("How many elements?/       ");
scanf("%d",&n);
printf("Enter elements!!!\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
for(i=0;i<n;i++)
printf("%d->",a[i]);
printf("\n");
return 0;
}

