#include<stdio.h>
#include"maxsub.h"
int main()
{
int a[100],n,i,ans[3];
printf("How many elements?/\n");
scanf("%d",&n);
printf("Enter Numbers!!!\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
maxsub(a,0,n-1,ans);
printf("%d\n%d\n%d\n",ans[0],ans[1],ans[2]);
return 0;
}
