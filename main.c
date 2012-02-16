#include <stdio.h>
#include <stdlib.h>

typedef struct _node 
{
  int value;
  struct node *next;
}node;

node *head,*tail;

void add(int v)
{
  node *temp=(node *)malloc(sizeof(node));
  temp->value=v;
  
  temp->next=NULL;
  if(!head)
  {
    head=temp;
    tail=temp;
  }
  else
  {
    tail->next=temp;
    tail=temp;
  }
}

void print_queue()
{
  node *temp=head;
  while(temp)
  {
    printf("%d",temp->value);
    temp=temp->next;
    if(temp)printf("->");
  }
  printf("\n");
}

int main()
{
  int a=0;
  for(int i=0;i<100;i++)
  {
    a+=i;
  }
  printf("a=%d\n",a);

  add(1);
  add(2);
  add(5);
  add(123);
  print_queue();
  return 0;
}
