
int queue[100];
int main()
{
	printf("Program to implement multiple queue\n");
	printf("enter the size of array\n");
	int size=readdata();  
	printf("\nenter number of queue");
	int number=readdata(); 
	int index[number][3];
	int rear[number];
	int front[number];
	int i,bottom=0,j,temp=0,ch;
	for(i=1;i<=number;i++)
	{
	index[i][1]=i;
	index[i][2]=bottom+temp; 
	temp=temp+(size/number)+1;
		if(temp>size||size%2==0)
			temp--;
	index[i][3]=temp; 
	rear[i]=index[i][2];
	front[i]=index[i][2];
	}
	int queuechoice,flag,value,choice;
	do 
	{
	printf("enter the choice:\n 1.Insert \n 2. Delete \n 3. Bye");
	ch=readdata();
	switch(ch) 
	{
	case 1: printf("choose  the  queue to insert data");
		 queuechoice=readdata();
		 flag=0,value,choice;  
		 
		for(i=1;i<=number;i++)
		{
		
			 if(queuechoice==index[i][1])
				{
					 flag=1;choice=i;break;
				 }
		}
		
		if(!flag)
			printf("error:enter a valid choice");
		else
			{
			printf("enter the value to be inserted");
			value=readdata(); 	
			rear[choice]=insert(index[choice][3],rear[choice],value);	
				}
			break;
case 2:	printf("choose  the  queue for deleting");
		queuechoice=readdata(); 
		flag=0,value,choice;
		
		for(i=1;i<=number;i++)
		{
		
			 if(queuechoice==index[i][1])
				{
					 flag=1;choice=i;break;
				 }
		}
		if(!flag)
			printf("error:enter a valid choice");
		else
			{
				
				
		front[choice]=delete(front[choice],rear[choice]);	
			}
		break;
	case 3: printf("bye");		
			
			
		}
		}while(ch!=3);
	
	
	
}

int readdata(){
int temp;
scanf("%d",&temp);
	return temp;
}

int insert(int max,int rear,int value){
	
	
	
	
	if(rear==max)
		printf("error:queue full");
	else
	{
		
	    queue[rear]=value;
		rear=rear+1;
	}
	return rear;
}

int delete(int front,int rear)
{

int value;
if(front==rear)
	printf("error:queue empty");
else
{
	

value=queue[front];
printf("deleted element is %d \n",value);
front=front+1;	
}
return front;
}

