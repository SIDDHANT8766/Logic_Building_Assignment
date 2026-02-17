#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE; 
typedef struct node** PPNODE; 


void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    PNODE temp = NULL;

    temp = first;

    while (temp != NULL)
    {
        printf("| %d |->",temp -> data);
        temp = temp -> next;
    }

    printf("\n");
    
}

int Count(PNODE first)
{
    PNODE temp = NULL;
    int iAdd = 0;

    temp = first;

    while(temp != NULL)
    {
        iAdd = iAdd + temp -> data;
        temp = temp -> next;    
    } 

    return iAdd;

    printf("\n");
    
}



int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head , 50);
    InsertFirst(&head , 30);
    InsertFirst(&head , 40);
    InsertFirst(&head , 30);
    InsertFirst(&head , 20);
    InsertFirst(&head , 10);

    Display(head);

    iRet = Count(head);
    printf("Total Addition of element is :%d",iRet);

    return 0;
}