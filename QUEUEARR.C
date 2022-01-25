#include<stdio.h>
#include<conio.h>
#define maxsize 25
void insert();
void delete();
void display();
void fele();
void rele();
int front=-1,rear=-1;
int q[maxsize];
void main()
{
  int ch;
  clrscr();
  while(1)
  {
   printf("\nMENU\n");
   printf("1.INSERT\n");
   printf("2.DELETE\n");
   printf("3.DISPLAY\n");
   printf("4.FRONT ELEMENT\n");
   printf("5.REAR ELEMENT\n");
   printf("6.EXIT\n");
   printf("\nEnter the choice:");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
	 insert();
	 break;
    case 2:
	 delete();
	 break;
    case 3:
	 display();
	 break;
    case 4:
	 fele();
	 break;
    case 5:
	 rele();
	 break;
    case 6:
	 exit(0);
    default:
    printf("\nInvalid choice");
   }
  }
}

void insert()
{
    int item;
    printf("\nEnter the element:");
    scanf("%d",&item);
    if(rear==maxsize-1)
    {
      printf("\nOverflow\n");
      return;
    }
    if(front==-1 && rear==-1)
    {
      front=0;
      rear=0;
    }
    else
      rear++;
      q[rear]=item;
      printf("\nElement inserted\n");
}
void delete()
{
    int item;
    if(front==-1 || front>rear)
    {
      printf("\nUnderflow\n");
      return;
    }
    else
    {
      item=q[front];
      if(front==rear)
      {
	front=-1;
	rear=-1;
      }
      else
	front++;
    }
      printf("\nElement deleted\n");
}
void display()
{
    int i;
    if(rear==-1)
       printf("\nEmpty queue\n");
    else
    {
       printf("\nThe elements are:\n");
       for(i=front;i<=rear;i++)
       {
	  printf("%d\t",q[i]);
       }
    }
}
void fele()
{
    int item;
    if(front==-1)
       printf("\nEmpty queue\n");
    else
    {
      item=q[front];
      printf("\nThe front element is %d\n",item);
    }
}
void rele()
{
    int item;
    if(rear==-1)
      printf("\nEmpty queue");
    else
    {
      item=q[rear];
      printf("\nThe rear element is %d\n",item);
    }
}