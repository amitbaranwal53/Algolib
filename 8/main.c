#include<stdio.h>
#include"radix.h"
int main()
{
	int a[100],b[100],n,i;
	printf("How many elements?/!!!\n");
	scanf("%d",&n);
	printf("Enter Elements!!!\n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	radix_sort(a,n);
	for(i=1;i<=n;i++)
		printf("%d->",a[i]);
	printf("\n");
	return 0;
}