#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int[],int);

void main()
{
int n,list[100],i;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements into the array\n");
for(i=0;i<n;i++)
{scanf("%d",&list[i]);
}
insertion_sort(list,n);
printf("array after insertion sort: ");
for(i=0;i<n;i++)
{
printf("%d ",list[i]);
}
}
void insertion_sort(int list[],int n)
{int j,value,hole;
for(j=0;j<n;j++)
{value=list[j];
hole=j;
while(hole>0&&list[hole-1]>value)
{
list[hole]=list[hole-1];
hole--;}
list[hole]=value;
}
}
