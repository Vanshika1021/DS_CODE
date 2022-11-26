#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head;
void create()
{
    struct node *temp,*newnode;
    head=0;
    int choice;
    while(choice)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
       temp=newnode;
    }
    printf("Want to continue");
    scanf("%d",&choice);
}
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=0)
    {
        printf("\nData=%d",temp->data);
        temp=temp->next;
    }    
}
void insert_at_beg()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    printf("New node");
}
void insert_at_end()
{
    struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
       temp=temp->next;
    }  
       temp->next=newnode;
       newnode->prev=temp;
       temp=newnode;
     
}
void insert_at_pos()                  //void insert_after_pos()
{
    struct node *temp,*newnode;
    int pos,i=1;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter position");
    scanf("%d",&pos);
    printf("Enter data");
    scanf("%d",&newnode->data);
    while(i<pos-1)                        //while(i<pos)
    {
        temp=temp->next;
        i++;
    }
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next->prev=newnode;
        printf("\nEnter new node");
}
void delete_from_beg()
{
    struct node *temp;
    temp=head;
    head=head->next;
    head->prev=0;
    free(temp);
    printf("\ndeleted node");
}
void delete_from_end()
{
    struct node *temp,*last;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    last=temp->prev;
    last->next=0;
    free(temp);
    printf("\ndeleted new node");
}
void delete_at_pos()
{
    struct node *temp,*current;
    int pos,i=1;
    printf("\nenter position");
    scanf("%d",&pos);
    temp=head;
    while(i<=pos-1)                          //while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    current=temp->next;
    current->prev=temp->prev;
    current->prev->next=current;
    free(temp);
    printf("new node");
}
void reverse()
{
    struct node *current,*nextnode,*tail;
    current=head;
    while(current!=0)
    {
      nextnode=current-> next;
      current-> next=current-> prev;
      current-> prev =nextnode;
      current=nextnode;
    }
   current=head;
   head=tail;
   tail=current;
   printf("\nreverse");
}
int main()
{
    create();
    display();
   //insert_at_beg();
   //insert_at_end();
   //insert_at_pos();
   //insert_after_pos();
   //delete_from_beg();
   //delete_from_end();
   //delete_at_pos();
   reverse();
   display();
    return 0;
}