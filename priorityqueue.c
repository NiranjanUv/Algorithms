


#include<stdio.h>
int heapsize=0;
int queue[100];
int size;
int main()
{
	printf("Program to implement prority queue using heap\n");
	
	printf("enter the size of array");
	size=read();
	int choice;
	int temp;
	do 
	{
		printf("\n1. Heap_insert  2.Heap_Extractmax  3.Display  4.Exit \nEnter the choice" );
               	choice=read();
        	switch(choice)
                {
			case 1:
				printf("enter the element to be inserted into the  queue");
				heapinsert(queue,size,read());
		          	break;
                        case 2: 
				temp=heapextractmax(queue,heapsize);
			        if(temp)  
			        	printf("Element removed is %d",temp);
				else
				  	printf(" queue empty");  
			      
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exit");
			        break;
			default:
				printf("\nInvalid choice");
			        break;
		}  
      
	}while(choice!=4);
return 0;
}


int read() 
{
	int temp;
        scanf("%d",&temp);
        return temp;
}


void heapinsert(int queue[],int size,int value)
{
	if(heapsize==size)
		printf("queue full");
	else
	{	
		heapsize=heapsize+1;
		queue[heapsize]=-999;
		heapincreasekey(queue,heapsize,value);
	}
}
void heapincreasekey(int queue[],int size,int value)
{
	if(value<queue[size])
		printf("new key value is smaller than current key value");
	queue[size]=value;
	while((size>1)&&(queue[(size/2)]<queue[size]))
	{
		int temp=queue[size];
		queue[size]=queue[(size/2)];
		queue[(size/2)]=temp;
		size=size/2;			 
	}
}

 
int heapextractmax(int a[])
{
	int max;
	if(heapsize<1)
		return 0;	
	else
	{
		max=a[1];
		a[1]=a[heapsize];
		heapsize=heapsize-1;
		heapify(a,1,heapsize);
		return max;	
	}
}


void heapify(int a[],int index)
{
	int s=index,temp; 	
	int left=2*index; 	
	int right=2*index+1;	
	if((left<=heapsize)&&(a[left]>a[index]))
		s=left;
	else
		s=index;
	if((right<=heapsize)&&(a[right]>a[s]))
		s=right;
	if(s!=index)
	{
		temp=a[index];
		a[index]=a[s];
		a[s]=temp;
		heapify(a,s);	
	}
}
void display()
{
	int i;	
	printf("\n Priority queue is");
	for(i=1;i<=heapsize;i++)
		printf("  %d",queue[i]);
}








