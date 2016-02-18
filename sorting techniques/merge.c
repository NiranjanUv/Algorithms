#include<stdio.h>
#include<stdlib.h>

void partition(int[],int,int);
void merge_sort(int[],int,int,int);

void main()
{
int n,list[100],i;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements into the array\n");
for(i=0;i<n;i++)
{scanf("%d",&list[i]);
}
if(n<2)
{printf("sorted array is %d",list[0]);
}
else
{partition(list,0,n-1);
printf("\nafter merge sort\n");
for(i=0;i<n;i++)
{printf("%d ",list[i]);
}
}
}

void partition(int list[],int low,int high)
{
int mid;
if(low<high)
{mid=(low+high)/2;
partition(list,low,mid);
partition(list,mid+1,high);
merge_sort(list,low,mid,high);
}
}
void merge_sort(int list[],int low,int mid,int high)
{
  int i, mi, k, lo, temp[50];
lo=low;
i=low;
mi=mid+1;

while(lo<=mid&&mi<=high)
{
if(list[lo]<list[mi])
{
temp[i]=list[lo];
lo++;
}
else
{
temp[i]=list[mi];
mi++;
}
i++;
}

if(lo>mid)
{
for(k=mi;k<=high;k++)
{
temp[i]=list[mi];
i++;
}
}

else
{
for(k=low;k<=mid;k++)
{temp[i]=list[k];
i++;
}
}

for(k=low;k<=high;k++)
{
list[k]=temp[k];
}

}
