#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head;
int main()
{
     struct node *newnode,*temp;
    head=0;
    int choice;
    while(choice)

    { 
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter data");
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
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
     struct node *newnode1,*temp1;
     temp=0;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("data");
    scanf("%d",&newnode1->data);
    newnode1->next=head;
    head=newnode1;
    temp1 = head;
     while(temp1!=0)
    {
        printf("%d\n",temp1->data);
        temp1=temp1->next;
    }
    return 0;
}