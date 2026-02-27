#include<stdio.h>
#include<stdlib.h>

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

void ReplaceEven(PNODE Head) 
{
    while (Head != NULL)
    {
        if ((Head->Data % 2) == 0) 
        {
            Head->Data = 0;
        }

        Head = Head->Next;
    }
}

void Display(PNODE Head)
{
    while (Head != NULL) 
    {
        printf("| %d |-> ", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

int main() {
    PNODE First = NULL;
    InsertFirst(&First, 40);
    InsertFirst(&First, 31);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    printf("Original List:\n");
    Display(First);

    ReplaceEven(First);

    printf("Updated List (Evens replaced with 0):\n");
    Display(First);

    return 0;
}