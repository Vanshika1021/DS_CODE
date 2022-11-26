#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void create()
{
    struct node *newnode,*temp;
    int choice;
    while(choice)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp->next=newnode;
    temp=newnode;
    printf("enter choice 0 to stop");
    scanf("%d",&choice);
    }
}
void display()
{
    struct node*temp;
    temp=head;
    while(temp!=0)
    {
        printf("\nData=%d",temp->data);
        temp=temp->next;
    } 
}
int main()
{
    create();
    display();
}