#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n],queue,l,m;
m=n/2;
int front= -1,rear= -1;
int front1,rear1;
front1=(n/2)-1;
rear1=(n/2)-1;

void main()
{int choice;
while(1)
{
printf("\nenter the queue no 1 or 2\t");
scanf("%d",&queue);
printf("\nenter the choice\n");
printf("1.insert\n2.delete\n3.display\n4.exit\n");
scanf("%d",&choice);
switch(choice)
{case 1:cqinsert();
         break;
case 2:cqdelete();
         break;
case 3:cqdisplay();
         break;
case 4:exit(0);
break;
default:
printf("enter choice");
          break;
}}}
cqinsert()
{int num;
if(queue==1)
{if((front==0&&rear==(m-1))||(front==rear+1))
{printf("\nqueue1 is full");

}
else
{rear=(rear+1)%m;
printf("\nenter the number");
scanf("%d",&num);
a[rear]= num;
if(front==-1)
{front=0;
}
}
}
else
{
if((front1==m&&rear1==(n-1))||(front1==rear1+1))
{printf("\nqueue 2 is full");
}
else
{
if(rear1<n)
{rear1=rear1+1;}
else
{rear1=m;}
printf("\nenter the number");
scanf("%d",&num);
a[rear1]=num;
if(front1==(m-1))
{front1= m;}
}}}

cqdelete()
{
int num;
if(queue==1)
{
if(front==-1)
{printf("queue is empty");
}
else
{num = a[front];
printf("the number deleted from queue 1 is %d",num);
if(front==rear)
front=rear=-1;
else{
if(front==(n/2)-1)
front=0;
else front++;
}}}
if(queue==2)
{
if(front1==(m-1))
{printf("queue 2 is empty");
}
else
{num = a[front1];
printf("the num deleted from queue 2 is %d",num);
if(front1==rear1)
{front1= m-1;
rear1= m-1;}
else
{if(front1==n-1)
front1= m;
else
front1= front1+ 1;}
}
}}
cqdisplay()
{int i;
if(queue==1)
{
if(front==rear)
{printf("queue is empty\n");
}
else if(front<=rear)
{printf("queue status\t");
for(i= front;i<=rear;i++)
{printf("%d\t",a[i]);
}
printf("\n");
}
else{
for(i=front;i<m;i++)
printf("%d\t",a[i]);
for(i=0;i<=rear;i++)
printf("%d\t",a[i]);
}
printf("\n");
}
if(queue==2)
{
if(front1==rear1)
{printf("queue 2 is empty");}
else if(front1<= rear1)
{printf("queue status\t");
for(i= front1;i<=rear1;i++)
{printf("%d\t",a[i]);
}
printf("\n");
}
else{
for(i=front1;i<n;i++)
printf("%d\t",a[i]);
for(i=m;i<=rear1;i++)
printf("%d\t",a[i]);
}
printf("\n");
}
}



