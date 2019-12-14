//linear queue
#include <stdio.h>
void insert();
void delete();
void display();
int op, front=-1 ,rear=-1,i=0,max,a[100],val ;
void main()
{
	if(i==0)
	{
		printf("Enter the size of array:");
		scanf("%d",&max);	
	}
	i=1;
	printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1: insert(); main(); break;
		case 2: delete(); main(); break;
		case 3: display(); main(); break;
		case 4: printf("\nPress any key to EXIT."); break;
		default : printf("\nInvalid Response!\n");
	}
}
void insert()
{
	if(rear==max-1)
	printf("\nOverFlow!\n");
	else
	{
	printf("\nEnter a value:");
	scanf("%d",&val);
	rear+=1;
	a[rear]=val;
		
	}
}
void delete()
{
	if((front==-1 && rear==-1)||(front>=rear))
	printf("\nQueue is Empty!\n");
	else
	{
	front+=1;
	val=a[front];
	printf("\nDeleted Value=%d",val);
	}

}
void display()
{
	int i;
	if((front==-1 && rear==-1)||(front>=rear))
	printf("\nQueue is Empty!\n");
	else
	{
	for(i=front+1; i<=rear; i++)
	printf(" %d ",a[i]);
	}
	
}
