#include<stdio.h>
#include<stdlib.h>

typedef int bool;
#define true 1
#define false 0

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

bool Search(PNODE Head, int No)
{
    while(Head != NULL)
    {
        if(Head->Data == No)
            return true;
        Head = Head->Next;
    }
    return false;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 10);

    if(Search(First, 50))
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
