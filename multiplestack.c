#include<stdio.h>
#include<stdlib.h>

int stack[100],b[100];                                

void push(int top[100], int n)                       
{
    int sn,a,d;
    
    printf("\nEnter the stack no. to be pushed\n");
    scanf("%d",&sn);
    sn=sn-1;                                         

    if(sn>=n||sn<0)
    printf("Invalid choice \n");
    
    else if(top[sn]+1==b[sn+1])
    printf("Stack is full\n");

    else
   {
    printf("Enter no. to be pushed\n");
    scanf("%d",&d);
  
    if(top[sn]==-1)
    {
        a=b[sn];
        stack[a]=d;
        top[sn]=b[sn];
    }

    else
    {
        top[sn]=top[sn]+1;
        a=top[sn];
        stack[a]=d;
        
    }
  }
}

void pop(int top[100])                               
{
    int sn,a;
    
    printf("\nEnter the stack no. to be popped\n");
    scanf("%d",&sn);
    sn=sn-1;                                         
    a=top[sn];
    
    if(top[sn]!=-1)
    {
    
    if(top[sn]==b[sn])
    {
     printf("The deleted no. is %d",stack[a]);  
     top[sn]=-1;
    }

    else
    {
     printf("The deleted no. is %d",stack[a]);
     top[sn]=top[sn]-1;
    }
    }
  
    else
    printf("The stack is empty");
    printf("\n");
}

void print(int top[100])
{
    int sn,i;
    printf("\nEnter the stack no. to be displayed\n");
    scanf("%d",&sn);
    sn=sn-1;                                            
    
    printf("\n");
    
    if(top[sn]==-1)
    printf("The stack is empty\n");
    
    else
    {
     printf("The stack is\n");

     for(i=b[sn];i<=top[sn];i++)
    
        printf("%d\n",stack[i]);
    }
}

int main()
{
    int m,n,i,top[100],ch;
    
    printf("\nProgram to implement multiple stack\n");
    printf("Enter the size of array\n");                       
    scanf("%d",&m);
    
    printf("Enter the no. of stacks\n");                        
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        b[i]=(m/n)*i;
        top[i]=-1;
        
    }

    b[n]=m;

do
	{
	 printf("\nEnter the choice:\n 1. Push \n 2. Pop \n 3. Print\n 4. Exit\n");
	 scanf("%d",&ch);
	switch(ch)
	{
	 case 1:    push(top,n);break;
         case 2:    pop(top);break;
	 case 3:    print(top);break;
	 case 4:    break;
         default:   printf("Invalid choice\n");break;

	}
	}while(ch!=4);
}
