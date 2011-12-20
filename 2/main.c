#include <stdio.h>
#include "1.2.h"
int main()
{
int a[100],i,n;
printf("How many numbers?/\n");
scanf("%d",&n);
printf("Enetr Numbers!!!\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
mergesort(a,0,n-1);
for(i=0;i<n;i++)
printf("%d->",a[i]);
printf("\n");
return 0;
}
