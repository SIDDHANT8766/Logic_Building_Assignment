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

int Count(PNODE first , int no)
{
    PNODE temp = NULL;
    int iPos = 1;
    int iCnt = 0;

    temp = first;

    while(temp != NULL)
    {
        if(temp -> data == no)
        {
            return iPos;
        }
        temp = temp -> next;
        iPos++;

    } 

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

    iRet = Count(head , 30);
    printf("Total Count of element 30 is :%d",iRet);

    return 0;
}