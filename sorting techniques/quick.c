#include<stdio.h>
#include<stdlib.h>
int partition(int[],int,int);
void quick_sort(int[],int,int);

void main()
{
int n,list[100],i;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements into the array\n");
for(i=0;i<n;i++)
{scanf("%d",&list[i]);
}
quick_sort(list,0,n-1);
printf("array after quick sort: ");
for(i=0;i<n;i++)
{
printf("%d ",list[i]);
}
}
void quick_sort(int list[],int start,int end)
{int p_index;
if(start<end)
{p_index=partition(list,start,end);
printf("%d ",p_index);
quick_sort(list,start,p_index-1);
quick_sort(list,p_index+1,end);
}
}
int partition(int list[],int start,int end)
{int pivot,i,temp,index;
pivot=list[end];
index=start;
for(i=start;i<end;i++)
{
if(list[i]<=pivot)
{
temp=list[i];
list[i]=pivot;
pivot=temp;
index++;
}
}
return index;
}
