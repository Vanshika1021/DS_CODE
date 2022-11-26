#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *temp,*head;
struct node=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&temp->data);
temp->newnode=null;
if(head==null)
{
    head=temp;
}
else
{
    head->link=temp;
}