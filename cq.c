
#include<stdio.h>
#define n 5
int cq[n];
int front= -1,rear= -1;
main()
{int choice;
while(1)
{printf("\nenter the choice\n");
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
if((front==0&&rear==n-1)||(front==rear+1))
{printf("queue full");

}
else
{rear=(rear+1)%n;
printf("enter the number");
scanf("%d",&num);
cq[rear]= num;
if(front==-1)
{front=0;}

}}
cqdelete()
{
int num;
if(front==-1)
{printf("queue is empty");
}
else
{num = cq[front];
printf("the number deleted is %d",num);
if(front==rear)
front=rear=-1;
else{
if(front==n-1)
front=0;
else front++;
}}}
cqdisplay()
{int i;
if(front==rear)
{printf("queue is empty\n");
}
else if(front<=rear)
{printf("queue status");
for(i= front;i<=rear;i++)
{printf("%d\t",cq[i]);
}
printf("\n");
}
else{
for(i=front;i<n;i++)
printf("%d\t",cq[i]);
for(i=0;i<=rear;i++)
printf("%d\t",cq[i]);
}
printf("\n");
}
