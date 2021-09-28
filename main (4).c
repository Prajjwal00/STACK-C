/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
    
};
struct node *top =NULL;
void push(void);
void display(void);
void pop(void);
void push()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter no ");
    scanf("%d",&temp->data);
    temp->link=top;
    top=temp;
}
void pop()
{
    struct node *temp;
    if(top ==NULL)
    {
        printf("invalid ");
        
    }
    temp =top;
    printf("%d",temp->data);
    top = top->link;
    temp->link=NULL;
    free(temp);
}
void display()
{
    struct node *temp;
    if(top == NULL)
    {
        printf("Empty ");
        
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->link;
            
        }
    }
}