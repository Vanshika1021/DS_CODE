#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}* head;
void create()
{
struct node *new_node,*temp;
int choice;
while (choice)
{ 
       new_node=(struct node*)malloc(sizeof(struct node));
       printf("enter data");
       scanf("%d",&new_node->data);
       new_node->next=0;
       if(head==0)
       {
        head=temp=new_node;
       }
       else
       {
        temp->next=new_node;
        temp=new_node;
       }
       printf("Do you want to continue");
       scanf("%d",&choice);
     }
         