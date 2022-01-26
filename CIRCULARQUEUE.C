#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int element)
{
   if(front==-1&&rear==-1)
   {
      front=0;
      rear=0;
      queue[rear]=element;
   }
   else if((rear+1)%max==front)
   {
      printf("\nQueue is overflow\n");
   }
   else
   {
      rear=(rear+1)%max;
      queue[rear]=element;
   }
}
void dequeue()
{
   if((front==-1)&&(rear==-1))
   {
      printf("\nQueue is underflow\n");
   }
   else if(front==rear)
   {
      printf("\nThe dequeued element is %d\n", queue[front]);
      front=-1;
      rear=-1;
   }
   else
   {
      printf("\nThe dequeued element is %d\n", queue[front]);
      front=(front+1)%max;
   }
}

void fele()
{
    if(front==-1)
    {
      printf("\nEmpty Circular Queue\n");
    }
    else
    {
      printf("\Front element is:%d",queue[front]);
    }
}
void rele()
{
    if(front==-1)
    {
      printf("\nEmpty Circular Queue\n");
    }
    else
    {
      printf("\Rear element is:%d",queue[rear]);
    }
}
void display()
{
   if(front==-1)
   {
      printf("\nQueue is empty\n");
   }
   else
   {
      int i=front;
      printf("\nElements in a Queue are:");
      while(i<=rear)
      {
	 printf("%d\n",queue[i]);
	 i=(i+1)%max;
      }
   }
}
void main()
{
    int choice,x;
    clrscr();
    while(1)
    {   printf("\nMENU\n");
	printf("\n1.Insert an element");
	printf("\n2.Delete an element");
	printf("\n3.Display front element");
	printf("\n4.Display rear element");
	printf("\n5.Display");
	printf("\n6.Exit");
	printf("\nEnter your choice:");
	scanf("%d", &choice);
	switch(choice)
	{
	 case 1:
	    printf("\nEnter the element which is to be inserted:");
	    scanf("%d", &x);
	    enqueue(x);
	    break;
	 case 2:
	    dequeue();
	    break;
	 case 3:
	    fele();
	    break;
	 case 4:
	    rele();
	    break;
	 case 5:
	    display();
	    break;
	 case 6:
	    exit(0);
	 default:
	    printf("\nInvalid input\n");
	}
     }
  getch();
}