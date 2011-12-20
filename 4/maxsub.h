//main problem here is not guessing the algo but to implement it
//i.e. how you are gonna return more than 1 value in c/c++
//method i used is arrays=>ans[3],leftans[3],rightans[3],crossans[3]

#include<limits.h>
void max_cross_sub(int a[],int low,int mid,int high,int crossans[])
{
int leftsum=INT_MIN,rightsum=INT_MIN,maxleft,maxright,sum=0,i,j;
for(i=mid;i>=0;i--)
{
sum=sum+a[i];
if(sum>leftsum){
leftsum=sum;
maxleft=i;
}
}
sum=0;
for(j=mid+1;j<=high;j++)
{
sum=sum+a[j];
if(sum>rightsum){
rightsum=sum;
maxright=j;
}
}
crossans[0]=maxleft;
crossans[1]=maxright;
crossans[2]=leftsum+rightsum;
}

void maxsub(int a[],int low,int high,int ans[])
{
int leftans[3],rightans[3],crossans[3],mid;
if(low==high){ans[0]=low;ans[1]=high,ans[2]=a[low];}
else{
mid=(low+high)/2;
maxsub(a,low,mid,leftans);
maxsub(a,mid+1,high,rightans);
max_cross_sub(a,low,mid,high,crossans);
if(leftans[2]>=rightans[2] && leftans[2]>=crossans[2]){ans[0]=leftans[0];ans[1]=leftans[1];ans[2]=leftans[2];}
else if(rightans[2]>=leftans[2] && rightans[2]>=crossans[2]){ans[0]=rightans[0];ans[1]=rightans[1];ans[2]=rightans[2];}
else {ans[0]=crossans[0];ans[1]=crossans[1];ans[2]=crossans[2];}
}
}
