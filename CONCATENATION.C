#include<stdio.h>
#include<conio.h>
struct Node
{
   int data;
   struct Node *link;
};
typedef struct Node node;
node *getnode();
void main()
{
   int n,m;
   node *first,*head;
   clrscr();
   first=NULL;
   head=NULL;
   printf("\nEnter the size of first list:\n");
   scanf("%d",&n);
   create(&first,n);
   printf("\nEnter the size of second list:\n");
   scanf("%d",&m);
   create(&head,m);
   printf("\nThe first list is:\n");
   display(first);
   printf("\nThe second list is:\n");
   display(head);
   printf("\nthe concatenated list is:\n");
   first=concat(&first,&head);
   display(first);
   getch();
}

create(node **start,int n)
{
   node *temp,*current;
   int item,i;
   for(i=1;i<=n;i++)
   {
      printf("\nEnter the element:\n");
      scanf("%d",&item);
      temp=getnode();
      temp->data=item;
      temp->link=NULL;
      if((*start)==NULL)
	 *start=temp;
      else
	 current->link=temp;
      current=temp;
   }
}
concat(node **start,node **head)
{
   node *p=*start;
   while((*start)->link!=NULL)
   {
      (*start)=(*start)->link;
   }
   (*start)->link=(*head);
   return p;
}
display(node *start)
{
   printf("\n");
   while(start!=NULL)
   {
      printf("%d\t",start->data);
      start=start->link;
   }
   printf("\n");
}
node *getnode()
{
  node *p;
  p=(node *)malloc(sizeof(node));
  return p;
}
