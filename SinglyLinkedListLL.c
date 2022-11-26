#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head;
void create()
{
struct node *newnode,*temp;
int choice;
while (choice)
   { 
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("Enter data");
       scanf("%d",&newnode->data);
       newnode->next=0;
       if(head==0)
        {
         head=temp=newnode;
        }
       else
        {
         temp->next=newnode;
         temp=newnode;
        }
       printf("Do you want to continue");
       scanf("%d",&choice);
    }
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp!=0)
    {
        printf("\nData = %d",temp->data);
        temp=temp->next;
    }
}
void insert_at_begining()
{
    struct node *newnode,*temp;
     temp=0;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\ndata");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    temp= head;
}
void insert_at_end()
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\ndata");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;    
}
void insert_at_position()
{
    struct node *newnode,*temp;
    int pos,i=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter position");
    scanf("%d",&pos);
    printf("\nEnter data:");
    scanf("%d",&newnode->data);
    temp=head;
    while(i<pos-1)  //for after (pos)----- before (pos-2)
    {
        temp=temp->next;
        newnode->next=temp->next;
        i++;
    }
    
    temp->next=newnode;
}
void delete_from_beg()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
    printf("\nThe linked list after deletion is:");
   
}
void delete_from_end()
{
    struct node *temp,*prevnode;
    temp=head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    prevnode->next=0;
    free(temp);
    printf("\nDeleted new node:: ");
}
void delete_at_position()
{
    struct node *temp,*nextnode;
    int pos,i=1;
    temp=head;
    printf("enter position");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
    
}
void count()
{
    struct node *temp; 
    int count=0;
    temp=head;
    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }
    printf("\ncount=%d",count);
}
void reverse()
{
    struct node *prevnode,*nextnode,*currentnode;
    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
    printf("\nenter reverse node");
}
int main()
{
    create();
    display();
    insert_at_begining();
    display();
    insert_at_end();
    display();
    insert_at_position();
    display();
    delete_from_beg();
    display();
    delete_from_end();
    display();
    delete_at_position();
    display();
    count();
    reverse();
    display();
}

